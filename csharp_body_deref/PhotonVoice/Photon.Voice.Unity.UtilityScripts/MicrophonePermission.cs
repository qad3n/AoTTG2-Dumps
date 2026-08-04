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

[Token(Token = "0x2000020")]
public class MicrophonePermission : VoiceComponent
{
	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x28")]
	private bool hasPermission;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool autoStart;

	[Token(Token = "0x17000051")]
	public bool HasPermission
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x3F50310", Offset = "0x3F50310", VA = "0x3F50310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x3F50320", Offset = "0x3F50320", VA = "0x3F50320")]
		private set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public static event Action<bool> MicrophonePermissionCallback
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3F50170", Offset = "0x3F50170", VA = "0x3F50170")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x3F50240", Offset = "0x3F50240", VA = "0x3F50240")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x3F50810", Offset = "0x3F50810", VA = "0x3F50810", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x3F50840", Offset = "0x3F50840", VA = "0x3F50840")]
	public void InitVoice()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3F50850", Offset = "0x3F50850", VA = "0x3F50850")]
	public MicrophonePermission()
	{
	}
}
