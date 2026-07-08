using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200005D")]
public abstract class SafeHandleZeroOrMinusOneIsInvalid : SafeHandle
{
	[Token(Token = "0x17000037")]
	public override bool IsInvalid
	{
		[Token(Token = "0x600021D")]
		[Address(RVA = "0x4E0D6D0", Offset = "0x4E0D6D0", VA = "0x4E0D6D0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4E0D620", Offset = "0x4E0D620", VA = "0x4E0D620")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandleZeroOrMinusOneIsInvalid(bool ownsHandle)
	{
	}
}
