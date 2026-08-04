// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LeakCategory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Collections;

[Token(Token = "0x2000043")]
[UnityEngine.Scripting.UsedByNativeCode]
internal enum LeakCategory
{
	[Token(Token = "0x40000C1")]
	Invalid,
	[Token(Token = "0x40000C2")]
	Malloc,
	[Token(Token = "0x40000C3")]
	TempJob,
	[Token(Token = "0x40000C4")]
	Persistent,
	[Token(Token = "0x40000C5")]
	LightProbesQuery,
	[Token(Token = "0x40000C6")]
	NativeTest,
	[Token(Token = "0x40000C7")]
	MeshDataArray,
	[Token(Token = "0x40000C8")]
	TransformAccessArray,
	[Token(Token = "0x40000C9")]
	NavMeshQuery
}
