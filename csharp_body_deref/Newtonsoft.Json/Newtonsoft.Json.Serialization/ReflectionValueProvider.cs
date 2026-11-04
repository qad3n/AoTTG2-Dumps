// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.ReflectionValueProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000138")]
public class ReflectionValueProvider : IValueProvider
{
	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x10")]
	private readonly MemberInfo _memberInfo;

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x1C6C690", Offset = "0x1C6AC90", VA = "0x181C6C690")]
	public ReflectionValueProvider(MemberInfo memberInfo)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x1C6C540", Offset = "0x1C6AB40", VA = "0x181C6C540", Slot = "4")]
	public void SetValue(object target, object? value)
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x1C6C300", Offset = "0x1C6A900", VA = "0x181C6C300", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}
}
