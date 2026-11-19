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
		[Address(RVA = "0x5739F30", Offset = "0x5738F30", VA = "0x5739F30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x5739F40", Offset = "0x5738F40", VA = "0x5739F40")]
		private set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public static event Action<bool> MicrophonePermissionCallback
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x5739D90", Offset = "0x5738D90", VA = "0x5739D90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x5739E60", Offset = "0x5738E60", VA = "0x5739E60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x573A360", Offset = "0x5739360", VA = "0x573A360", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x573A390", Offset = "0x5739390", VA = "0x573A390")]
	public void InitVoice()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x573A3A0", Offset = "0x57393A0", VA = "0x573A3A0")]
	public MicrophonePermission()
	{
	}
}
