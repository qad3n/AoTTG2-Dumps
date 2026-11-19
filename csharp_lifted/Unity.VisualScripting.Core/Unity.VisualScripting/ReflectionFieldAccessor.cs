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
	[Address(RVA = "0x682D990", Offset = "0x682C990", VA = "0x682D990")]
	public ReflectionFieldAccessor(FieldInfo fieldInfo)
	{
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x68322B0", Offset = "0x68312B0", VA = "0x68322B0", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x68322C0", Offset = "0x68312C0", VA = "0x68322C0", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x68322F0", Offset = "0x68312F0", VA = "0x68322F0", Slot = "6")]
	public void SetValue(object target, object value)
	{
	}
}
