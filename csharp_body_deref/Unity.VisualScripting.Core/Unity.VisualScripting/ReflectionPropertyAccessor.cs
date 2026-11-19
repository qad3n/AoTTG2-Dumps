// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ReflectionPropertyAccessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000156")]
public sealed class ReflectionPropertyAccessor : IOptimizedAccessor
{
	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x10")]
	private readonly PropertyInfo propertyInfo;

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x682E480", Offset = "0x682D480", VA = "0x682E480")]
	public ReflectionPropertyAccessor(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x6832C40", Offset = "0x6831C40", VA = "0x6832C40", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x6832C50", Offset = "0x6831C50", VA = "0x6832C50", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x6832C80", Offset = "0x6831C80", VA = "0x6832C80", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
