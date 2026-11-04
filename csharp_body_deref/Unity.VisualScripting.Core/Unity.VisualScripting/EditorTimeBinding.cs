// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.EditorTimeBinding
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003A")]
public static class EditorTimeBinding
{
	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x0")]
	public static Func<int> frameBinding;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x8")]
	public static Func<float> timeBinding;

	[Token(Token = "0x1700005D")]
	public static int frame
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x2DA2B60", Offset = "0x2DA1160", VA = "0x182DA2B60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005E")]
	public static float time
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x2DA2C30", Offset = "0x2DA1230", VA = "0x182DA2C30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x2DA2A10", Offset = "0x2DA1010", VA = "0x182DA2A10")]
	static EditorTimeBinding()
	{
	}
}
