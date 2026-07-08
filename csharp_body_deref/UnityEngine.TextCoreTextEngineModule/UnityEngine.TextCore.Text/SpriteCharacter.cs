using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000018")]
public class SpriteCharacter : TextElement
{
	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x17000025")]
	public string name
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x4B8F700", Offset = "0x4B8F700", VA = "0x4B8F700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4B909B0", Offset = "0x4B909B0", VA = "0x4B909B0")]
	public SpriteCharacter()
	{
	}
}
