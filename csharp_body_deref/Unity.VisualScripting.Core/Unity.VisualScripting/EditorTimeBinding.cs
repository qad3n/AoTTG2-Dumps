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
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	public static Func<int> frameBinding;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x8")]
	public static Func<float> timeBinding;

	[Token(Token = "0x1700005C")]
	public static int frame
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x4CA3470", Offset = "0x4CA3470", VA = "0x4CA3470")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005D")]
	public static float time
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x4CA3570", Offset = "0x4CA3570", VA = "0x4CA3570")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4CA3670", Offset = "0x4CA3670", VA = "0x4CA3670")]
	static EditorTimeBinding()
	{
	}
}
