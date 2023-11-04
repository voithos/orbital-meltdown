#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "SpawnRateData.generated.h"

USTRUCT(BlueprintType)
struct FSpawnRateData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

    FSpawnRateData()
        : Enemy1Count(0)
        , Enemy2Count(0)
        , Enemy3Count(0)
        , Enemy4Count(0)
        , Enemy5Count(0)
    {}

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnRate)
    int32 Enemy1Count;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnRate)
    int32 Enemy2Count;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnRate)
    int32 Enemy3Count;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnRate)
    int32 Enemy4Count;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnRate)
    int32 Enemy5Count;
};
