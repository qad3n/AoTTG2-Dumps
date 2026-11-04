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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(CameraFacing);
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DeviceFeatures()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	public DeviceFeatures(CameraFacing facing)
	{
	}
}
