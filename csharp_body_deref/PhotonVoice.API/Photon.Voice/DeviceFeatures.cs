// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.DeviceFeatures
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Device.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3F19220", Offset = "0x3F19220", VA = "0x3F19220")]
		[CompilerGenerated]
		get
		{
			return default(CameraFacing);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x3F19230", Offset = "0x3F19230", VA = "0x3F19230")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3F191F0", Offset = "0x3F191F0", VA = "0x3F191F0")]
	public DeviceFeatures()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3F19200", Offset = "0x3F19200", VA = "0x3F19200")]
	public DeviceFeatures(CameraFacing facing)
	{
	}
}
