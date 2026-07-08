using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200005E")]
public abstract class SafeHandleMinusOneIsInvalid : SafeHandle
{
	[Token(Token = "0x17000038")]
	public override bool IsInvalid
	{
		[Token(Token = "0x600021F")]
		[Address(RVA = "0x4E0D760", Offset = "0x4E0D760", VA = "0x4E0D760", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4E0D720", Offset = "0x4E0D720", VA = "0x4E0D720")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandleMinusOneIsInvalid(bool ownsHandle)
	{
	}
}
