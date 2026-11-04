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
	[Token(Token = "0x400082E")]
	[FieldOffset(Offset = "0x10")]
	private readonly FieldInfo fieldInfo;

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x2E35DD0", Offset = "0x2E343D0", VA = "0x182E35DD0")]
	public ReflectionFieldAccessor(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x8F67D0", Offset = "0x8F4DD0", VA = "0x1808F67D0", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x8F7770", Offset = "0x8F5D70", VA = "0x1808F7770", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
