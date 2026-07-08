using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000032")]
public class DeviceFeatures
{
	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x0")]
	internal static DeviceFeatures Default;

	[Token(Token = "0x1700003E")]
	public CameraFacing CameraFacing
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x3C238D0", Offset = "0x3C238D0", VA = "0x3C238D0")]
		[CompilerGenerated]
		get
		{
			return default(CameraFacing);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x3C238E0", Offset = "0x3C238E0", VA = "0x3C238E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3C238A0", Offset = "0x3C238A0", VA = "0x3C238A0")]
	public DeviceFeatures()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3C238B0", Offset = "0x3C238B0", VA = "0x3C238B0")]
	public DeviceFeatures(CameraFacing facing)
	{
	}
}
