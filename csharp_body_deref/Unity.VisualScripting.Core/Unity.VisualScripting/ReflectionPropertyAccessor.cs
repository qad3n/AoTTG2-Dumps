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
	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x10")]
	private readonly PropertyInfo propertyInfo;

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x4D412A0", Offset = "0x4D412A0", VA = "0x4D412A0")]
	public ReflectionPropertyAccessor(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x4D46F00", Offset = "0x4D46F00", VA = "0x4D46F00", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x4D46F10", Offset = "0x4D46F10", VA = "0x4D46F10", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x4D46F40", Offset = "0x4D46F40", VA = "0x4D46F40", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
