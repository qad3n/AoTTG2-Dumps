// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CustomDebug
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CustomDebug.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200071B")]
public class CustomDebug : MonoBehaviour
{
	[Token(Token = "0x200071C")]
	[CompilerGenerated]
	private sealed class _003CDrawLineCoroutine_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400223C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400223D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400223E")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 start;

		[Token(Token = "0x400223F")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 end;

		[Token(Token = "0x4002240")]
		[FieldOffset(Offset = "0x38")]
		public Color color;

		[Token(Token = "0x4002241")]
		[FieldOffset(Offset = "0x48")]
		public float duration;

		[Token(Token = "0x4002242")]
		[FieldOffset(Offset = "0x50")]
		private GameObject _003ClineObj_003E5__2;

		[Token(Token = "0x17000DA4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004636")]
			[Address(RVA = "0x43842C0", Offset = "0x43842C0", VA = "0x43842C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DA5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004638")]
			[Address(RVA = "0x4384310", Offset = "0x4384310", VA = "0x4384310", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004633")]
		[Address(RVA = "0x4383F90", Offset = "0x4383F90", VA = "0x4383F90")]
		[DebuggerHidden]
		public _003CDrawLineCoroutine_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004634")]
		[Address(RVA = "0x4384050", Offset = "0x4384050", VA = "0x4384050", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004635")]
		[Address(RVA = "0x4384060", Offset = "0x4384060", VA = "0x4384060", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004637")]
		[Address(RVA = "0x43842D0", Offset = "0x43842D0", VA = "0x43842D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200071D")]
	[CompilerGenerated]
	private sealed class _003CSpawnPrimitiveCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002243")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002244")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002245")]
		[FieldOffset(Offset = "0x20")]
		public CustomDebug _003C_003E4__this;

		[Token(Token = "0x4002246")]
		[FieldOffset(Offset = "0x28")]
		public PrimitiveType type;

		[Token(Token = "0x4002247")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 position;

		[Token(Token = "0x4002248")]
		[FieldOffset(Offset = "0x38")]
		public Quaternion Rotation;

		[Token(Token = "0x4002249")]
		[FieldOffset(Offset = "0x48")]
		public Vector3 size;

		[Token(Token = "0x400224A")]
		[FieldOffset(Offset = "0x54")]
		public Color color;

		[Token(Token = "0x400224B")]
		[FieldOffset(Offset = "0x64")]
		public float duration;

		[Token(Token = "0x400224C")]
		[FieldOffset(Offset = "0x68")]
		private GameObject _003Cobj_003E5__2;

		[Token(Token = "0x17000DA6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600463C")]
			[Address(RVA = "0x4384490", Offset = "0x4384490", VA = "0x4384490", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DA7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600463E")]
			[Address(RVA = "0x43844E0", Offset = "0x43844E0", VA = "0x43844E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004639")]
		[Address(RVA = "0x4383FB0", Offset = "0x4383FB0", VA = "0x4383FB0")]
		[DebuggerHidden]
		public _003CSpawnPrimitiveCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600463A")]
		[Address(RVA = "0x4384320", Offset = "0x4384320", VA = "0x4384320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600463B")]
		[Address(RVA = "0x4384330", Offset = "0x4384330", VA = "0x4384330", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600463D")]
		[Address(RVA = "0x43844A0", Offset = "0x43844A0", VA = "0x43844A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400223A")]
	[FieldOffset(Offset = "0x0")]
	private static CustomDebug _instance;

	[Token(Token = "0x400223B")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, GameObject> _debugObjects;

	[Token(Token = "0x600461F")]
	[Address(RVA = "0x43821B0", Offset = "0x43821B0", VA = "0x43821B0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004620")]
	[Address(RVA = "0x4382220", Offset = "0x4382220", VA = "0x4382220")]
	public static void RemoveDebugVisual(string name)
	{
	}

	[Token(Token = "0x6004621")]
	[Address(RVA = "0x4382350", Offset = "0x4382350", VA = "0x4382350")]
	public static string DrawRay(Vector3 origin, Vector3 direction, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6004622")]
	[Address(RVA = "0x4382640", Offset = "0x4382640", VA = "0x4382640")]
	public static string DrawLine(Vector3 start, Vector3 end, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6004623")]
	[Address(RVA = "0x4382750", Offset = "0x4382750", VA = "0x4382750")]
	public static string SpawnCube(Vector3 position, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6004624")]
	[Address(RVA = "0x4382B10", Offset = "0x4382B10", VA = "0x4382B10")]
	public static string SpawnSphere(Vector3 position, float radius, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6004625")]
	[Address(RVA = "0x4382C50", Offset = "0x4382C50", VA = "0x4382C50")]
	public static string SpawnCylinder(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6004626")]
	[Address(RVA = "0x4382D90", Offset = "0x4382D90", VA = "0x4382D90")]
	public static string SpawnCapsule(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6004627")]
	[Address(RVA = "0x4382ED0", Offset = "0x4382ED0", VA = "0x4382ED0")]
	public static string SpawnCapsuleCollder(CapsuleCollider capsule, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6004628")]
	[Address(RVA = "0x43833F0", Offset = "0x43833F0", VA = "0x43833F0")]
	public static void DrawRay(Vector3 origin, Vector3 direction, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x6004629")]
	[Address(RVA = "0x4383610", Offset = "0x4383610", VA = "0x4383610")]
	public static void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x600462A")]
	[Address(RVA = "0x4383770", Offset = "0x4383770", VA = "0x4383770")]
	public static void SpawnCube(Vector3 position, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x600462B")]
	[Address(RVA = "0x4383A50", Offset = "0x4383A50", VA = "0x4383A50")]
	public static void SpawnSphere(Vector3 position, float radius, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x600462C")]
	[Address(RVA = "0x4383C10", Offset = "0x4383C10", VA = "0x4383C10")]
	public static void SpawnCylinder(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x600462D")]
	[Address(RVA = "0x4383DD0", Offset = "0x4383DD0", VA = "0x4383DD0")]
	public static void SpawnCapsule(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x600462E")]
	[Address(RVA = "0x4383550", Offset = "0x4383550", VA = "0x4383550")]
	[IteratorStateMachine(typeof(_003CDrawLineCoroutine_003Ed__17))]
	private IEnumerator DrawLineCoroutine(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x600462F")]
	[Address(RVA = "0x4383950", Offset = "0x4383950", VA = "0x4383950")]
	[IteratorStateMachine(typeof(_003CSpawnPrimitiveCoroutine_003Ed__18))]
	private IEnumerator SpawnPrimitiveCoroutine(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x6004630")]
	[Address(RVA = "0x4382460", Offset = "0x4382460", VA = "0x4382460")]
	private GameObject DrawLineObject(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x6004631")]
	[Address(RVA = "0x43828D0", Offset = "0x43828D0", VA = "0x43828D0")]
	private GameObject SpawnPrimitiveObject(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color)
	{
		return null;
	}

	[Token(Token = "0x6004632")]
	[Address(RVA = "0x4383FD0", Offset = "0x4383FD0", VA = "0x4383FD0")]
	public CustomDebug()
	{
	}
}
