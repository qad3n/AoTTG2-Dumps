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

[Token(Token = "0x2000030")]
public class DeviceFeatures
{
	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x0")]
	internal static DeviceFeatures Default;

	[Token(Token = "0x1700003E")]
	public CameraFacing CameraFacing
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x5703ED0", Offset = "0x5702ED0", VA = "0x5703ED0")]
		[CompilerGenerated]
		get
		{
			return default(CameraFacing);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x5703EE0", Offset = "0x5702EE0", VA = "0x5703EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x5703EA0", Offset = "0x5702EA0", VA = "0x5703EA0")]
	public DeviceFeatures()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x5703EB0", Offset = "0x5702EB0", VA = "0x5703EB0")]
	public DeviceFeatures(CameraFacing facing)
	{
	}
}
