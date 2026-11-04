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
	[Address(RVA = "0x2E36930", Offset = "0x2E34F30", VA = "0x182E36930")]
	public ReflectionPropertyAccessor(PropertyInfo propertyInfo)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x8F5ED0", Offset = "0x8F44D0", VA = "0x1808F5ED0", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E0C")]
	[Address(RVA = "0x8FA230", Offset = "0x8F8830", VA = "0x1808FA230", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
