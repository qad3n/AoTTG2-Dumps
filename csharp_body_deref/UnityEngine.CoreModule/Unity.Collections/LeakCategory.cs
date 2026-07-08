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
