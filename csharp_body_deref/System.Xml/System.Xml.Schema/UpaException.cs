// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.UpaException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000171")]
internal class UpaException : Exception
{
	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x90")]
	private object particle1;

	[Token(Token = "0x4000772")]
	[FieldOffset(Offset = "0x98")]
	private object particle2;

	[Token(Token = "0x17000416")]
	public object Particle1
	{
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x6144300", Offset = "0x6143300", VA = "0x6144300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000417")]
	public object Particle2
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x6144310", Offset = "0x6143310", VA = "0x6144310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x6144280", Offset = "0x6143280", VA = "0x6144280")]
	public UpaException(object particle1, object particle2)
	{
	}
}
