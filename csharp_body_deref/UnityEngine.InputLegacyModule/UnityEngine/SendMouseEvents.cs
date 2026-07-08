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
		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x0")]
		public GameObject target;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x8")]
		public Camera camera;

		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4B498A0", Offset = "0x4B498A0", VA = "0x4B498A0")]
		public void SendMessage(string name)
		{
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4B49820", Offset = "0x4B49820", VA = "0x4B49820")]
		public static implicit operator bool(HitInfo exists)
		{
			return default(bool);
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4B498C0", Offset = "0x4B498C0", VA = "0x4B498C0")]
		public static bool Compare(HitInfo lhs, HitInfo rhs)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x0")]
	private static bool s_MouseUsed;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly HitInfo[] m_LastHit;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x10")]
	private static readonly HitInfo[] m_MouseDownHit;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x18")]
	private static readonly HitInfo[] m_CurrentHit;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x20")]
	private static Camera[] m_Cameras;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x28")]
	public static Func<KeyValuePair<int, Vector2>> s_GetMouseState;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x30")]
	private static Vector2 s_MousePosition;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x38")]
	private static bool s_MouseButtonPressedThisFrame;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x39")]
	private static bool s_MouseButtonIsPressed;

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4B48250", Offset = "0x4B48250", VA = "0x4B48250")]
	private static void UpdateMouse()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4B48480", Offset = "0x4B48480", VA = "0x4B48480")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SetMouseMoved()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4B484F0", Offset = "0x4B484F0", VA = "0x4B484F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void DoSendMouseEvents(int skipRTCameras)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4B49010", Offset = "0x4B49010", VA = "0x4B49010")]
	private static void SendEvents(int i, HitInfo hit)
	{
	}
}
