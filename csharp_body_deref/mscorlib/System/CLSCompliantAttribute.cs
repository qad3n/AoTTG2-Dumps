using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200009B")]
[AttributeUsage(AttributeTargets.All, Inherited = true, AllowMultiple = false)]
public sealed class CLSCompliantAttribute : Attribute
{
	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x10")]
	private bool _compliant;

	[Token(Token = "0x17000064")]
	public bool IsCompliant
	{
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x4F32730", Offset = "0x4F32730", VA = "0x4F32730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x4F32710", Offset = "0x4F32710", VA = "0x4F32710")]
	public CLSCompliantAttribute(bool isCompliant)
	{
	}
}
