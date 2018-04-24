// Copyright 2018 Phyronnaz

#pragma once

#include "CoreMinimal.h"
#include "VoxelUtilities.h"
#include "VoxelType.h"
#include "VoxelMaterial.h"
#include "VoxelWorldGenerator.h"
#include "VoxelAsset.h"
#include "FastNoise.h"
#include "SmallRavines.generated.h"


class FSmallRavinesInstance : public FVoxelWorldGeneratorInstance
{
public:
	struct FVoxelContext { int32 X; int32 Y; int32 Z; }; 
	FSmallRavinesInstance(
)
	{

	}
	virtual void GetValuesAndMaterialsAndVoxelTypes(float Values[], FVoxelMaterial Materials[], FVoxelType VoxelTypes[], const FIntVector& Start, const FIntVector& StartIndex, const int Step, const FIntVector& Size, const FIntVector& ArraySize) const override
	{
		for (int K = 0; K < Size.Z; K++)
		{
			const int Z = Start.Z + K * Step;
			for (int J = 0; J < Size.Y; J++)
			{
				const int Y = Start.Y + J * Step;
				for (int I = 0; I < Size.X; I++)
				{
					const int X = Start.X + I * Step;
					const int Index = (StartIndex.X + I) + ArraySize.X * (StartIndex.Y + J) + ArraySize.X * ArraySize.Y * (StartIndex.Z + K);
float ___Value___ = 1;
FVoxelMaterial ___Material___(0, 0, 0, 0);
FVoxelType ___VoxelType___ = FVoxelType::UseAll();
FVoxelContext ___Context___;
___Context___.X = X;
___Context___.Y = Y;
___Context___.Z = Z;
float ___0___;
___0___ = ___Context___.Z;
float ___1___;
___1___ = ___0___ - 10.0;
float ___2___;
___2___ = ___1___ / 2.5;
float ___3___;
___3___ = ___Context___.Z;
float ___4___;
___4___ = 0.0;
float ___5___;
___5___ = ___Context___.X;
float ___6___;
___6___ = ___Context___.Y;
float ___7___;
___7___ = ___Context___.Z;
float ___8___;
___8___ = VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.GetSimplexFractal(___5___ / 1.0, ___6___ / 1.0, ___7___ / 1.0);
float ___9___;
___9___ = 10.0;
float ___10___;
___10___ = ___8___ * ___9___;
float ___11___;
___11___ = FMath::Min<float>(___3___, ___4___);
float ___12___;
___12___ = ___10___ + ___11___;
float ___13___;
___13___ = 1.0;
float ___14___;
___14___ = FMath::Clamp<float>(___2___, 0.0, 1.0);
float ___15___;
___15___ = FMath::Lerp<float>(___12___, ___13___, ___14___);
___Value___ = FMath::Clamp<float>(___15___, -1.f, 1.f);					if (Values)
					{
						Values[Index] = ___Value___;
					}
					if (Materials)
					{
						Materials[Index] = ___Material___;
					}
					if (VoxelTypes)
					{
						VoxelTypes[Index] = ___VoxelType___;
					}
				}
			}
		}
	}
	
	virtual void SetVoxelWorld(const AVoxelWorld* ___VoxelWorld___) override
	{
VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.SetSeed(1337);
VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.SetFrequency(0.02);
VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.SetInterp((FastNoise::Interp)2);
VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.SetFractalOctaves(3);
VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.SetFractalLacunarity(2.0);
VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.SetFractalGain(0.5);
VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.SetFractalType((FastNoise::FractalType)0);
	}
	
	virtual bool IsEmpty(const FIntVector& Start, const int Step, const FIntVector& Size) const override
	{
		int __IsEmptySign__ = 0;
		for (int K = 0; K < Size.Z; K++)
		{
			const int Z = Start.Z + K * Step;
			for (int J = 0; J < Size.Y; J++)
			{
				const int Y = Start.Y + J * Step;
				for (int I = 0; I < Size.X; I++)
				{
					const int X = Start.X + I * Step;
float ___Value___ = 1;
FVoxelMaterial ___Material___(0, 0, 0, 0);
FVoxelType ___VoxelType___ = FVoxelType::UseAll();
FVoxelContext ___Context___;
___Context___.X = X;
___Context___.Y = Y;
___Context___.Z = Z;
float ___0___;
___0___ = ___Context___.Z;
float ___1___;
___1___ = ___0___ - 10.0;
float ___2___;
___2___ = ___1___ / 2.5;
float ___3___;
___3___ = ___Context___.Z;
float ___4___;
___4___ = 0.0;
float ___5___;
___5___ = ___Context___.X;
float ___6___;
___6___ = ___Context___.Y;
float ___7___;
___7___ = ___Context___.Z;
float ___8___;
___8___ = VoxelNode_3DSimplexNoiseFractal_0___Noise___16792.GetSimplexFractal(___5___ / 1.0, ___6___ / 1.0, ___7___ / 1.0);
float ___9___;
___9___ = 10.0;
float ___10___;
___10___ = ___8___ * ___9___;
float ___11___;
___11___ = FMath::Min<float>(___3___, ___4___);
float ___12___;
___12___ = ___10___ + ___11___;
float ___13___;
___13___ = 1.0;
float ___14___;
___14___ = FMath::Clamp<float>(___2___, 0.0, 1.0);
float ___15___;
___15___ = FMath::Lerp<float>(___12___, ___13___, ___14___);
___Value___ = FMath::Clamp<float>(___15___, -1.f, 1.f);					if (-1 + KINDA_SMALL_NUMBER < ___Value___ && ___Value___ < 1 - KINDA_SMALL_NUMBER)
					{
						return false;
					}

					if (__IsEmptySign__ == 0)
					{
						__IsEmptySign__ = ___Value___ > 0 ? 1 : -1;
					}
					else if (__IsEmptySign__ == 1)
					{
						if (___Value___ < 0)
						{
							return false;
						}
					}
					else
					{
						check(__IsEmptySign__ == -1);
						if (___Value___ > 0)
						{
							return false;
						}
					}
				}
			}
		}
		return true;
	}
	
public:
private:
	FastNoise VoxelNode_3DSimplexNoiseFractal_0___Noise___16792;

};

UCLASS(Blueprintable)
class USmallRavines : public UVoxelWorldGenerator
{
	GENERATED_BODY()

public:
	USmallRavines()
	{

	}
	TSharedRef<FVoxelWorldGeneratorInstance> GetWorldGenerator() override
	{
		return MakeShareable(new FSmallRavinesInstance(
));
	}

};