// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.PropertyCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200006F")]
public class PropertyCollection : Hashtable, ICloneable
{
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x45BD1E0", Offset = "0x45BD1E0", VA = "0x45BD1E0")]
	public PropertyCollection()
	{
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x45BD1F0", Offset = "0x45BD1F0", VA = "0x45BD1F0")]
	protected PropertyCollection(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x45BD200", Offset = "0x45BD200", VA = "0x45BD200", Slot = "25")]
	public override object Clone()
	{
		return null;
	}
}
