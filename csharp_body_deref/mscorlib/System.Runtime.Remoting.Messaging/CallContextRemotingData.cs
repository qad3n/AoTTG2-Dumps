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
[Token(Token = "0x20003C8")]
internal class CallContextRemotingData : ICloneable
{
	[Token(Token = "0x4000F47")]
	[FieldOffset(Offset = "0x10")]
	private string _logicalCallID;

	[Token(Token = "0x1700039F")]
	internal string LogicalCallID
	{
		[Token(Token = "0x6001E70")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E71")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170003A0")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001E72")]
		[Address(RVA = "0x19DA120", Offset = "0x19D8720", VA = "0x1819DA120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E73")]
	[Address(RVA = "0x19F12C0", Offset = "0x19EF8C0", VA = "0x1819F12C0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E74")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CallContextRemotingData()
	{
	}
}
