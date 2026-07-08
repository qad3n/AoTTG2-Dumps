using System.Collections;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200006F")]
public class PropertyCollection : Hashtable, ICloneable
{
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x427FA80", Offset = "0x427FA80", VA = "0x427FA80")]
	public PropertyCollection()
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x427FA90", Offset = "0x427FA90", VA = "0x427FA90")]
	protected PropertyCollection(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x427FAA0", Offset = "0x427FAA0", VA = "0x427FAA0", Slot = "25")]
	public override object Clone()
	{
		return null;
	}
}
