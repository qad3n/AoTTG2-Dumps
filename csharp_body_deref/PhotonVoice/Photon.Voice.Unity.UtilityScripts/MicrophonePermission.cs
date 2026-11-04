// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.MicrophonePermission
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/MicrophonePermission.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200001E")]
public class MicrophonePermission : VoiceComponent
{
	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x28")]
	private bool hasPermission;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<bool> m_MicrophonePermissionCallback;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool autoStart;

	[Token(Token = "0x17000051")]
	public bool HasPermission
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x1D8A340", Offset = "0x1D88940", VA = "0x181D8A340")]
		private set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public static event Action<bool> MicrophonePermissionCallback
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x1D8A1A0", Offset = "0x1D887A0", VA = "0x181D8A1A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x1D8A270", Offset = "0x1D88870", VA = "0x181D8A270")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x1D8A0E0", Offset = "0x1D886E0", VA = "0x181D8A0E0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x1D8A120", Offset = "0x1D88720", VA = "0x181D8A120")]
	public void InitVoice()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x1D8A130", Offset = "0x1D88730", VA = "0x181D8A130")]
	public MicrophonePermission()
	{
	}
}
