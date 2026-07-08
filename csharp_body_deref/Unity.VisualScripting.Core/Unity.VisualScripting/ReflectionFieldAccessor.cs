using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000153")]
public sealed class ReflectionFieldAccessor : IOptimizedAccessor
{
	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x10")]
	private readonly FieldInfo fieldInfo;

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x4A1BA90", Offset = "0x4A1BA90", VA = "0x4A1BA90")]
	public ReflectionFieldAccessor(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x4A219B0", Offset = "0x4A219B0", VA = "0x4A219B0", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x4A219C0", Offset = "0x4A219C0", VA = "0x4A219C0", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x4A219F0", Offset = "0x4A219F0", VA = "0x4A219F0", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
