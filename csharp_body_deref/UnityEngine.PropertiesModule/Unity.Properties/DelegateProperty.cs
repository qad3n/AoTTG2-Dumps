using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000006")]
public class DelegateProperty<TContainer, TValue> : Property<TContainer, TValue>
{
	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly PropertyGetter<TContainer, TValue> m_Getter;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly PropertySetter<TContainer, TValue> m_Setter;

	[Token(Token = "0x17000002")]
	public override string Name
	{
		[Token(Token = "0x6000009")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000A")]
	public DelegateProperty(string name, PropertyGetter<TContainer, TValue> getter, [Optional] PropertySetter<TContainer, TValue> setter)
	{
	}
}
