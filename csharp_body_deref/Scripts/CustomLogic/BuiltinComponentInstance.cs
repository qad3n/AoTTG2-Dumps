using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000436")]
internal abstract class BuiltinComponentInstance : BuiltinClassInstance
{
	[Token(Token = "0x40011B3")]
	[FieldOffset(Offset = "0x30")]
	public Component Component;

	[Token(Token = "0x170008B6")]
	public new bool Enabled
	{
		[Token(Token = "0x6002D04")]
		[Address(RVA = "0x3E49230", Offset = "0x3E49230", VA = "0x3E49230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002D05")]
		[Address(RVA = "0x3E492A0", Offset = "0x3E492A0", VA = "0x3E492A0")]
		set
		{
		}
	}

	[Token(Token = "0x6002D02")]
	[Address(RVA = "0x3E491D0", Offset = "0x3E491D0", VA = "0x3E491D0")]
	protected BuiltinComponentInstance(Component component)
	{
	}

	[Token(Token = "0x6002D03")]
	protected static T GetOrAddComponent<T>(GameObject gameObject) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6002D06")]
	[Address(RVA = "0x3E49320", Offset = "0x3E49320", VA = "0x3E49320")]
	public void Unload()
	{
	}
}
