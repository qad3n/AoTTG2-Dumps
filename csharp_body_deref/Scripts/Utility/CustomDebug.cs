using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006CD")]
public class CustomDebug : MonoBehaviour
{
	[Token(Token = "0x20006CE")]
	[CompilerGenerated]
	private sealed class _003CDrawLineCoroutine_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020DF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020E0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020E1")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 start;

		[Token(Token = "0x40020E2")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 end;

		[Token(Token = "0x40020E3")]
		[FieldOffset(Offset = "0x38")]
		public Color color;

		[Token(Token = "0x40020E4")]
		[FieldOffset(Offset = "0x48")]
		public float duration;

		[Token(Token = "0x40020E5")]
		[FieldOffset(Offset = "0x50")]
		private GameObject _003ClineObj_003E5__2;

		[Token(Token = "0x17000D2A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60043CE")]
			[Address(RVA = "0x40512B0", Offset = "0x40512B0", VA = "0x40512B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D2B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60043D0")]
			[Address(RVA = "0x4051300", Offset = "0x4051300", VA = "0x4051300", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60043CB")]
		[Address(RVA = "0x4050F80", Offset = "0x4050F80", VA = "0x4050F80")]
		[DebuggerHidden]
		public _003CDrawLineCoroutine_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60043CC")]
		[Address(RVA = "0x4051040", Offset = "0x4051040", VA = "0x4051040", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60043CD")]
		[Address(RVA = "0x4051050", Offset = "0x4051050", VA = "0x4051050", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60043CF")]
		[Address(RVA = "0x40512C0", Offset = "0x40512C0", VA = "0x40512C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006CF")]
	[CompilerGenerated]
	private sealed class _003CSpawnPrimitiveCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020E6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020E7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020E8")]
		[FieldOffset(Offset = "0x20")]
		public CustomDebug _003C_003E4__this;

		[Token(Token = "0x40020E9")]
		[FieldOffset(Offset = "0x28")]
		public PrimitiveType type;

		[Token(Token = "0x40020EA")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 position;

		[Token(Token = "0x40020EB")]
		[FieldOffset(Offset = "0x38")]
		public Quaternion Rotation;

		[Token(Token = "0x40020EC")]
		[FieldOffset(Offset = "0x48")]
		public Vector3 size;

		[Token(Token = "0x40020ED")]
		[FieldOffset(Offset = "0x54")]
		public Color color;

		[Token(Token = "0x40020EE")]
		[FieldOffset(Offset = "0x64")]
		public float duration;

		[Token(Token = "0x40020EF")]
		[FieldOffset(Offset = "0x68")]
		private GameObject _003Cobj_003E5__2;

		[Token(Token = "0x17000D2C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60043D4")]
			[Address(RVA = "0x4051480", Offset = "0x4051480", VA = "0x4051480", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D2D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60043D6")]
			[Address(RVA = "0x40514D0", Offset = "0x40514D0", VA = "0x40514D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60043D1")]
		[Address(RVA = "0x4050FA0", Offset = "0x4050FA0", VA = "0x4050FA0")]
		[DebuggerHidden]
		public _003CSpawnPrimitiveCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60043D2")]
		[Address(RVA = "0x4051310", Offset = "0x4051310", VA = "0x4051310", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60043D3")]
		[Address(RVA = "0x4051320", Offset = "0x4051320", VA = "0x4051320", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60043D5")]
		[Address(RVA = "0x4051490", Offset = "0x4051490", VA = "0x4051490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40020DD")]
	[FieldOffset(Offset = "0x0")]
	private static CustomDebug _instance;

	[Token(Token = "0x40020DE")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, GameObject> _debugObjects;

	[Token(Token = "0x60043B7")]
	[Address(RVA = "0x404F1A0", Offset = "0x404F1A0", VA = "0x404F1A0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60043B8")]
	[Address(RVA = "0x404F210", Offset = "0x404F210", VA = "0x404F210")]
	public static void RemoveDebugVisual(string name)
	{
	}

	[Token(Token = "0x60043B9")]
	[Address(RVA = "0x404F340", Offset = "0x404F340", VA = "0x404F340")]
	public static string DrawRay(Vector3 origin, Vector3 direction, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60043BA")]
	[Address(RVA = "0x404F630", Offset = "0x404F630", VA = "0x404F630")]
	public static string DrawLine(Vector3 start, Vector3 end, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60043BB")]
	[Address(RVA = "0x404F740", Offset = "0x404F740", VA = "0x404F740")]
	public static string SpawnCube(Vector3 position, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60043BC")]
	[Address(RVA = "0x404FB00", Offset = "0x404FB00", VA = "0x404FB00")]
	public static string SpawnSphere(Vector3 position, float radius, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60043BD")]
	[Address(RVA = "0x404FC40", Offset = "0x404FC40", VA = "0x404FC40")]
	public static string SpawnCylinder(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60043BE")]
	[Address(RVA = "0x404FD80", Offset = "0x404FD80", VA = "0x404FD80")]
	public static string SpawnCapsule(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60043BF")]
	[Address(RVA = "0x404FEC0", Offset = "0x404FEC0", VA = "0x404FEC0")]
	public static string SpawnCapsuleCollder(CapsuleCollider capsule, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x60043C0")]
	[Address(RVA = "0x40503E0", Offset = "0x40503E0", VA = "0x40503E0")]
	public static void DrawRay(Vector3 origin, Vector3 direction, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60043C1")]
	[Address(RVA = "0x4050600", Offset = "0x4050600", VA = "0x4050600")]
	public static void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60043C2")]
	[Address(RVA = "0x4050760", Offset = "0x4050760", VA = "0x4050760")]
	public static void SpawnCube(Vector3 position, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60043C3")]
	[Address(RVA = "0x4050A40", Offset = "0x4050A40", VA = "0x4050A40")]
	public static void SpawnSphere(Vector3 position, float radius, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60043C4")]
	[Address(RVA = "0x4050C00", Offset = "0x4050C00", VA = "0x4050C00")]
	public static void SpawnCylinder(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60043C5")]
	[Address(RVA = "0x4050DC0", Offset = "0x4050DC0", VA = "0x4050DC0")]
	public static void SpawnCapsule(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x60043C6")]
	[Address(RVA = "0x4050540", Offset = "0x4050540", VA = "0x4050540")]
	[IteratorStateMachine(typeof(_003CDrawLineCoroutine_003Ed__17))]
	private IEnumerator DrawLineCoroutine(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x60043C7")]
	[Address(RVA = "0x4050940", Offset = "0x4050940", VA = "0x4050940")]
	[IteratorStateMachine(typeof(_003CSpawnPrimitiveCoroutine_003Ed__18))]
	private IEnumerator SpawnPrimitiveCoroutine(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x60043C8")]
	[Address(RVA = "0x404F450", Offset = "0x404F450", VA = "0x404F450")]
	private GameObject DrawLineObject(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x60043C9")]
	[Address(RVA = "0x404F8C0", Offset = "0x404F8C0", VA = "0x404F8C0")]
	private GameObject SpawnPrimitiveObject(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color)
	{
		return null;
	}

	[Token(Token = "0x60043CA")]
	[Address(RVA = "0x4050FC0", Offset = "0x4050FC0", VA = "0x4050FC0")]
	public CustomDebug()
	{
	}
}
