// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ReflectionFieldAccessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D40660", Offset = "0x4D40660", VA = "0x4D40660")]
	public ReflectionFieldAccessor(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x4D46580", Offset = "0x4D46580", VA = "0x4D46580", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x4D46590", Offset = "0x4D46590", VA = "0x4D46590", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x4D465C0", Offset = "0x4D465C0", VA = "0x4D465C0", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
