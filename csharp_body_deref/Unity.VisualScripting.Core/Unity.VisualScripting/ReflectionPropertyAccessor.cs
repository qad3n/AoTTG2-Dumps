using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000156")]
public sealed class ReflectionPropertyAccessor : IOptimizedAccessor
{
	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x10")]
	private readonly PropertyInfo propertyInfo;

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x4A1C6D0", Offset = "0x4A1C6D0", VA = "0x4A1C6D0")]
	public ReflectionPropertyAccessor(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x4A22330", Offset = "0x4A22330", VA = "0x4A22330", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x4A22340", Offset = "0x4A22340", VA = "0x4A22340", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x4A22370", Offset = "0x4A22370", VA = "0x4A22370", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
