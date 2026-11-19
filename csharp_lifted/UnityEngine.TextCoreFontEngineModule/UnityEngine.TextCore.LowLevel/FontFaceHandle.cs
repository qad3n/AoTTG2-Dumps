// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.FontFaceHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x2000010")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
internal struct FontFaceHandle : IEquatable<FontFaceHandle>
{
	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x0")]
	internal long fontInstanceID;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x8")]
	internal int faceIndex;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0xC")]
	internal int pointSize;

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x69FCE50", Offset = "0x69FBE50", VA = "0x69FCE50", Slot = "4")]
	public bool Equals(FontFaceHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x69FCE70", Offset = "0x69FBE70", VA = "0x69FCE70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x69FCEF0", Offset = "0x69FBEF0", VA = "0x69FCEF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
