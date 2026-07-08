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
	[Address(RVA = "0x3AFF6D0", Offset = "0x3AFF6D0", VA = "0x3AFF6D0")]
	public ReflectionValueProvider(MemberInfo memberInfo)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x3AFF730", Offset = "0x3AFF730", VA = "0x3AFF730", Slot = "4")]
	public void SetValue(object target, object? value)
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x3AFF8D0", Offset = "0x3AFF8D0", VA = "0x3AFF8D0", Slot = "5")]
	public object GetValue(object target)
	{
		return null;
	}
}
