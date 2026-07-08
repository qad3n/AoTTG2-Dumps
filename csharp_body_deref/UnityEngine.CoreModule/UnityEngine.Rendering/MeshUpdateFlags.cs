using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002A1")]
[Flags]
public enum MeshUpdateFlags
{
	[Token(Token = "0x40006EF")]
	Default = 0,
	[Token(Token = "0x40006F0")]
	DontValidateIndices = 1,
	[Token(Token = "0x40006F1")]
	DontResetBoneBounds = 2,
	[Token(Token = "0x40006F2")]
	DontNotifyMeshUsers = 4,
	[Token(Token = "0x40006F3")]
	DontRecalculateBounds = 8
}
