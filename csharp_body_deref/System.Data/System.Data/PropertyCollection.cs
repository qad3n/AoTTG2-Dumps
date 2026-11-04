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
[Token(Token = "0x2000079")]
public class PropertyCollection : Hashtable, ICloneable
{
	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x25235C0", Offset = "0x2521BC0", VA = "0x1825235C0")]
	public PropertyCollection()
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x25235D0", Offset = "0x2521BD0", VA = "0x1825235D0")]
	protected PropertyCollection(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x2523390", Offset = "0x2521990", VA = "0x182523390", Slot = "25")]
	public override object Clone()
	{
		return null;
	}
}
