// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.CallContextRemotingData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x2000399")]
internal class CallContextRemotingData : ICloneable
{
	[Token(Token = "0x4000F3D")]
	[FieldOffset(Offset = "0x10")]
	private string _logicalCallID;

	[Token(Token = "0x1700039D")]
	internal string LogicalCallID
	{
		[Token(Token = "0x6001E01")]
		[Address(RVA = "0x3B86510", Offset = "0x3B86510", VA = "0x3B86510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E02")]
		[Address(RVA = "0x3B86520", Offset = "0x3B86520", VA = "0x3B86520")]
		set
		{
		}
	}

	[Token(Token = "0x1700039E")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001E03")]
		[Address(RVA = "0x3B86300", Offset = "0x3B86300", VA = "0x3B86300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E04")]
	[Address(RVA = "0x3B86220", Offset = "0x3B86220", VA = "0x3B86220", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E05")]
	[Address(RVA = "0x3B86530", Offset = "0x3B86530", VA = "0x3B86530")]
	public CallContextRemotingData()
	{
	}
}
