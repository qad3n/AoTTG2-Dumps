// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.FontFaceHandle
// Update status: NEW in this game update
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

	[Token(Token = "0x600008D")]
	[Address(RVA = "0xAC7B40", Offset = "0xAC6140", VA = "0x180AC7B40", Slot = "4")]
	public bool Equals(FontFaceHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3002490", Offset = "0x3000A90", VA = "0x183002490", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3002530", Offset = "0x3000B30", VA = "0x183002530", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
