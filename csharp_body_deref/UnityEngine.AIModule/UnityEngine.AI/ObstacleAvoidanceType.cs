using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.AI;

[Token(Token = "0x2000003")]
[MovedFrom("UnityEngine")]
public enum ObstacleAvoidanceType
{
	[Token(Token = "0x4000002")]
	NoObstacleAvoidance,
	[Token(Token = "0x4000003")]
	LowQualityObstacleAvoidance,
	[Token(Token = "0x4000004")]
	MedQualityObstacleAvoidance,
	[Token(Token = "0x4000005")]
	GoodQualityObstacleAvoidance,
	[Token(Token = "0x4000006")]
	HighQualityObstacleAvoidance
}
