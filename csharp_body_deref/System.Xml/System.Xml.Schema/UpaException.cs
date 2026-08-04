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
		[Address(RVA = "0x4845200", Offset = "0x4845200", VA = "0x4845200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000417")]
	public object Particle2
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x4845210", Offset = "0x4845210", VA = "0x4845210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x4845180", Offset = "0x4845180", VA = "0x4845180")]
	public UpaException(object particle1, object particle2)
	{
	}
}
