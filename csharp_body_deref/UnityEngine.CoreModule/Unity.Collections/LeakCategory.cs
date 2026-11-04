// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LeakCategory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.Collections;

[Token(Token = "0x2000057")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AIModule" })]
[UnityEngine.Scripting.UsedByNativeCode]
internal enum LeakCategory
{
	[Token(Token = "0x40000F6")]
	Invalid,
	[Token(Token = "0x40000F7")]
	Malloc,
	[Token(Token = "0x40000F8")]
	TempJob,
	[Token(Token = "0x40000F9")]
	Persistent,
	[Token(Token = "0x40000FA")]
	LightProbesQuery,
	[Token(Token = "0x40000FB")]
	NativeTest,
	[Token(Token = "0x40000FC")]
	MeshDataArray,
	[Token(Token = "0x40000FD")]
	TransformAccessArray,
	[Token(Token = "0x40000FE")]
	NavMeshQuery
}
