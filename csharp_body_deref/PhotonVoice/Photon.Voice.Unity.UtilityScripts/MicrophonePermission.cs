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
		[Address(RVA = "0x3C5DD60", Offset = "0x3C5DD60", VA = "0x3C5DD60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x3C5DD70", Offset = "0x3C5DD70", VA = "0x3C5DD70")]
		private set
		{
		}
	}

	[Token(Token = "0x14000005")]
	public static event Action<bool> MicrophonePermissionCallback
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3C5DBC0", Offset = "0x3C5DBC0", VA = "0x3C5DBC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x3C5DC90", Offset = "0x3C5DC90", VA = "0x3C5DC90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x3C5E260", Offset = "0x3C5E260", VA = "0x3C5E260", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x3C5E290", Offset = "0x3C5E290", VA = "0x3C5E290")]
	public void InitVoice()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3C5E2A0", Offset = "0x3C5E2A0", VA = "0x3C5E2A0")]
	public MicrophonePermission()
	{
	}
}
