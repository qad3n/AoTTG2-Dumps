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

[Token(Token = "0x20008A0")]
public class CustomDebug : MonoBehaviour
{
	[Token(Token = "0x20008A1")]
	[CompilerGenerated]
	private sealed class _003CDrawLineCoroutine_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002AFB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002AFC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002AFD")]
		[FieldOffset(Offset = "0x20")]
		public Vector3 start;

		[Token(Token = "0x4002AFE")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 end;

		[Token(Token = "0x4002AFF")]
		[FieldOffset(Offset = "0x38")]
		public Color color;

		[Token(Token = "0x4002B00")]
		[FieldOffset(Offset = "0x48")]
		public float duration;

		[Token(Token = "0x4002B01")]
		[FieldOffset(Offset = "0x50")]
		private GameObject _003ClineObj_003E5__2;

		[Token(Token = "0x17000F05")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005292")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F06")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005294")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600528F")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDrawLineCoroutine_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005290")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005291")]
		[Address(RVA = "0x233FA50", Offset = "0x233E050", VA = "0x18233FA50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005293")]
		[Address(RVA = "0x233FCC0", Offset = "0x233E2C0", VA = "0x18233FCC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008A2")]
	[CompilerGenerated]
	private sealed class _003CSpawnPrimitiveCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B02")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B03")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B04")]
		[FieldOffset(Offset = "0x20")]
		public CustomDebug _003C_003E4__this;

		[Token(Token = "0x4002B05")]
		[FieldOffset(Offset = "0x28")]
		public PrimitiveType type;

		[Token(Token = "0x4002B06")]
		[FieldOffset(Offset = "0x2C")]
		public Vector3 position;

		[Token(Token = "0x4002B07")]
		[FieldOffset(Offset = "0x38")]
		public Quaternion Rotation;

		[Token(Token = "0x4002B08")]
		[FieldOffset(Offset = "0x48")]
		public Vector3 size;

		[Token(Token = "0x4002B09")]
		[FieldOffset(Offset = "0x54")]
		public Color color;

		[Token(Token = "0x4002B0A")]
		[FieldOffset(Offset = "0x64")]
		public float duration;

		[Token(Token = "0x4002B0B")]
		[FieldOffset(Offset = "0x68")]
		private GameObject _003Cobj_003E5__2;

		[Token(Token = "0x17000F07")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005298")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F08")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600529A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005295")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSpawnPrimitiveCoroutine_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005296")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005297")]
		[Address(RVA = "0x2340370", Offset = "0x233E970", VA = "0x182340370", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005299")]
		[Address(RVA = "0x2340510", Offset = "0x233EB10", VA = "0x182340510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002AF9")]
	[FieldOffset(Offset = "0x0")]
	private static CustomDebug _instance;

	[Token(Token = "0x4002AFA")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, GameObject> _debugObjects;

	[Token(Token = "0x600527B")]
	[Address(RVA = "0x23331E0", Offset = "0x23317E0", VA = "0x1823331E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600527C")]
	[Address(RVA = "0x2333260", Offset = "0x2331860", VA = "0x182333260")]
	public static void RemoveDebugVisual(string name)
	{
	}

	[Token(Token = "0x600527D")]
	[Address(RVA = "0x23330B0", Offset = "0x23316B0", VA = "0x1823330B0")]
	public static string DrawRay(Vector3 origin, Vector3 direction, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x600527E")]
	[Address(RVA = "0x2332E40", Offset = "0x2331440", VA = "0x182332E40")]
	public static string DrawLine(Vector3 start, Vector3 end, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x600527F")]
	[Address(RVA = "0x2333DD0", Offset = "0x23323D0", VA = "0x182333DD0")]
	public static string SpawnCube(Vector3 position, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6005280")]
	[Address(RVA = "0x2334780", Offset = "0x2332D80", VA = "0x182334780")]
	public static string SpawnSphere(Vector3 position, float radius, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6005281")]
	[Address(RVA = "0x2334140", Offset = "0x2332740", VA = "0x182334140")]
	public static string SpawnCylinder(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6005282")]
	[Address(RVA = "0x2333A90", Offset = "0x2332090", VA = "0x182333A90")]
	public static string SpawnCapsule(Vector3 position, float radius, float height, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6005283")]
	[Address(RVA = "0x2333390", Offset = "0x2331990", VA = "0x182333390")]
	public static string SpawnCapsuleCollder(CapsuleCollider capsule, Color color, string name)
	{
		return null;
	}

	[Token(Token = "0x6005284")]
	[Address(RVA = "0x2332F60", Offset = "0x2331560", VA = "0x182332F60")]
	public static void DrawRay(Vector3 origin, Vector3 direction, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x6005285")]
	[Address(RVA = "0x2332D10", Offset = "0x2331310", VA = "0x182332D10")]
	public static void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x6005286")]
	[Address(RVA = "0x2333F70", Offset = "0x2332570", VA = "0x182333F70")]
	public static void SpawnCube(Vector3 position, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x6005287")]
	[Address(RVA = "0x23348F0", Offset = "0x2332EF0", VA = "0x1823348F0")]
	public static void SpawnSphere(Vector3 position, float radius, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x6005288")]
	[Address(RVA = "0x23342D0", Offset = "0x23328D0", VA = "0x1823342D0")]
	public static void SpawnCylinder(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x6005289")]
	[Address(RVA = "0x2333C20", Offset = "0x2332220", VA = "0x182333C20")]
	public static void SpawnCapsule(Vector3 position, float radius, float height, Color color, float duration = 1f)
	{
	}

	[Token(Token = "0x600528A")]
	[Address(RVA = "0x2332A90", Offset = "0x2331090", VA = "0x182332A90")]
	[IteratorStateMachine(typeof(_003CDrawLineCoroutine_003Ed__17))]
	private IEnumerator DrawLineCoroutine(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x600528B")]
	[Address(RVA = "0x2334480", Offset = "0x2332A80", VA = "0x182334480")]
	[IteratorStateMachine(typeof(_003CSpawnPrimitiveCoroutine_003Ed__18))]
	private IEnumerator SpawnPrimitiveCoroutine(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x600528C")]
	[Address(RVA = "0x2332B20", Offset = "0x2331120", VA = "0x182332B20")]
	private GameObject DrawLineObject(Vector3 start, Vector3 end, Color color, float duration)
	{
		return null;
	}

	[Token(Token = "0x600528D")]
	[Address(RVA = "0x2334540", Offset = "0x2332B40", VA = "0x182334540")]
	private GameObject SpawnPrimitiveObject(PrimitiveType type, Vector3 position, Quaternion Rotation, Vector3 size, Color color)
	{
		return null;
	}

	[Token(Token = "0x600528E")]
	[Address(RVA = "0x2334AA0", Offset = "0x23330A0", VA = "0x182334AA0")]
	public CustomDebug()
	{
	}
}
