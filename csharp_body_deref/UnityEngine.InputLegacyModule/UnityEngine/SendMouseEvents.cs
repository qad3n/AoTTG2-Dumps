// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SendMouseEvents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000B")]
internal class SendMouseEvents
{
	[Token(Token = "0x200000C")]
	private struct HitInfo
	{
		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x0")]
		public GameObject target;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0x8")]
		public Camera camera;

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x2FC36A0", Offset = "0x2FC1CA0", VA = "0x182FC36A0")]
		public void SendMessage(string name)
		{
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x2FC36D0", Offset = "0x2FC1CD0", VA = "0x182FC36D0")]
		public static implicit operator bool(HitInfo exists)
		{
			return default(bool);
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x2FC3610", Offset = "0x2FC1C10", VA = "0x182FC3610")]
		public static bool Compare(HitInfo lhs, HitInfo rhs)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x0")]
	private static bool s_MouseUsed;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x8")]
	private static readonly HitInfo[] m_LastHit;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HitInfo[] m_MouseDownHit;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x18")]
	private static readonly HitInfo[] m_CurrentHit;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x20")]
	private static Camera[] m_Cameras;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x28")]
	public static Func<KeyValuePair<int, Vector2>> s_GetMouseState;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x30")]
	private static Vector2 s_MousePosition;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x38")]
	private static bool s_MouseButtonPressedThisFrame;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x39")]
	private static bool s_MouseButtonIsPressed;

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2FC6220", Offset = "0x2FC4820", VA = "0x182FC6220")]
	private static void UpdateMouse()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2FC61D0", Offset = "0x2FC47D0", VA = "0x182FC61D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SetMouseMoved()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2FC4C70", Offset = "0x2FC3270", VA = "0x182FC4C70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DoSendMouseEvents(int skipRTCameras)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2FC58C0", Offset = "0x2FC3EC0", VA = "0x182FC58C0")]
	private static void SendEvents(int i, HitInfo hit)
	{
	}
}
