// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapDestruction
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapDestruction.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003F0")]
internal static class MapDestruction
{
	[Token(Token = "0x20003F1")]
	[CompilerGenerated]
	private sealed class _003CSweepHitbox_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001434")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001435")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001436")]
		[FieldOffset(Offset = "0x20")]
		public BaseHitbox hitbox;

		[Token(Token = "0x4001437")]
		[FieldOffset(Offset = "0x28")]
		private HashSet<int> _003Chit_003E5__2;

		[Token(Token = "0x4001438")]
		[FieldOffset(Offset = "0x30")]
		private Collider _003Ccollider_003E5__3;

		[Token(Token = "0x4001439")]
		[FieldOffset(Offset = "0x38")]
		private Vector3 _003Cprevious_003E5__4;

		[Token(Token = "0x170002AC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001930")]
			[Address(RVA = "0x5882D10", Offset = "0x5881D10", VA = "0x5882D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170002AD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001932")]
			[Address(RVA = "0x5882D60", Offset = "0x5881D60", VA = "0x5882D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600192D")]
		[Address(RVA = "0x587E010", Offset = "0x587D010", VA = "0x587E010")]
		[DebuggerHidden]
		public _003CSweepHitbox_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600192E")]
		[Address(RVA = "0x58827B0", Offset = "0x58817B0", VA = "0x58827B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600192F")]
		[Address(RVA = "0x58827C0", Offset = "0x58817C0", VA = "0x58827C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001931")]
		[Address(RVA = "0x5882D20", Offset = "0x5881D20", VA = "0x5882D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400141F")]
	private const float MaxObjectToHitboxSize = 23f;

	[Token(Token = "0x4001420")]
	private const float MaxObjectToExplosionSize = 11f;

	[Token(Token = "0x4001421")]
	private const float MaxObjectSize = 1000f;

	[Token(Token = "0x4001422")]
	private const float MaxHitToHandSize = 4f;

	[Token(Token = "0x4001423")]
	private const float MaxExplosionSize = 150f;

	[Token(Token = "0x4001424")]
	private const float ExplosionReachToRadius = 0.5f;

	[Token(Token = "0x4001425")]
	private const float MaxAttackerDistance = 1000f;

	[Token(Token = "0x4001426")]
	private const int StateChunkSize = 256;

	[Token(Token = "0x4001427")]
	private const int MaxEffectsPerEvent = 4;

	[Token(Token = "0x4001428")]
	private const float AttachedSizeRatio = 0.5f;

	[Token(Token = "0x4001429")]
	private const float AttachedContainment = 0.6f;

	[Token(Token = "0x400142A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int MapMask;

	[Token(Token = "0x400142B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, DestructibleMapObject> Objects;

	[Token(Token = "0x400142C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<Renderer, BatchSlice> BatchSlices;

	[Token(Token = "0x400142D")]
	[FieldOffset(Offset = "0x18")]
	private static readonly HashSet<int> Destroyed;

	[Token(Token = "0x400142E")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Collider[] Overlaps;

	[Token(Token = "0x400142F")]
	[FieldOffset(Offset = "0x28")]
	private static readonly List<int> Targets;

	[Token(Token = "0x4001430")]
	[FieldOffset(Offset = "0x30")]
	private static readonly List<DestructibleMapObject> Applied;

	[Token(Token = "0x4001431")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Queue<int> Pending;

	[Token(Token = "0x4001432")]
	[FieldOffset(Offset = "0x40")]
	private static readonly HashSet<Component> NavMeshRemovals;

	[Token(Token = "0x4001433")]
	[FieldOffset(Offset = "0x48")]
	private static readonly WaitForFixedUpdate FixedStep;

	[Token(Token = "0x170002AA")]
	public static bool IsActive
	{
		[Token(Token = "0x6001910")]
		[Address(RVA = "0x587D0F0", Offset = "0x587C0F0", VA = "0x587D0F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AB")]
	private static bool Enabled
	{
		[Token(Token = "0x6001911")]
		[Address(RVA = "0x587D180", Offset = "0x587C180", VA = "0x587D180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x587D220", Offset = "0x587C220", VA = "0x587D220")]
	public static void Reset()
	{
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x587D310", Offset = "0x587C310", VA = "0x587D310")]
	public static void RegisterBatchSlice(Renderer original, Mesh combined, int start, int count)
	{
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x587D3D0", Offset = "0x587C3D0", VA = "0x587D3D0")]
	public static void Build()
	{
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x587D6D0", Offset = "0x587C6D0", VA = "0x587D6D0")]
	private static void RemoveParentsOfIndestructible()
	{
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x587DD20", Offset = "0x587CD20", VA = "0x587DD20")]
	public static void Remove(int id)
	{
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x587DDF0", Offset = "0x587CDF0", VA = "0x587DDF0")]
	public static bool CanDestroyWith(BaseCharacter attacker)
	{
		return default(bool);
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x587DFA0", Offset = "0x587CFA0", VA = "0x587DFA0")]
	[IteratorStateMachine(typeof(_003CSweepHitbox_003Ed__31))]
	public static IEnumerator SweepHitbox(BaseHitbox hitbox)
	{
		return null;
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x587E030", Offset = "0x587D030", VA = "0x587E030")]
	public static void Explode(BaseCharacter attacker, Vector3 center, float radius)
	{
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x587E1B0", Offset = "0x587D1B0", VA = "0x587E1B0")]
	private static void Request(BaseCharacter attacker, int count, Vector3 center, Vector3 direction, float hitSize, HashSet<int> hit)
	{
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x587EB20", Offset = "0x587DB20", VA = "0x587EB20")]
	public static void OnRequest(int attackerId, int[] ids, Vector3 center, Vector3 direction, float hitSize, Player sender)
	{
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x587F8B0", Offset = "0x587E8B0", VA = "0x587F8B0")]
	public static void OnDestroyed(int[] ids, Vector3 center, float hitSize, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x587F960", Offset = "0x587E960", VA = "0x587F960")]
	public static void RequestState()
	{
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x587FB30", Offset = "0x587EB30", VA = "0x587FB30")]
	public static void OnStateRequest(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x587FFF0", Offset = "0x587EFF0", VA = "0x587FFF0")]
	public static void OnState(int[] ids, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x587F3B0", Offset = "0x587E3B0", VA = "0x587F3B0")]
	private static void Apply(int[] ids, Vector3 center, float hitSize, bool effects)
	{
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x5880320", Offset = "0x587F320", VA = "0x5880320")]
	private static void EnqueueAttached(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x5880BB0", Offset = "0x587FBB0", VA = "0x5880BB0")]
	private static float ContainedFraction(Bounds inner, Bounds outer)
	{
		return default(float);
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x587EA20", Offset = "0x587DA20", VA = "0x587EA20")]
	private static bool CanBreak(int id, float maxObjectSize)
	{
		return default(bool);
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x587E920", Offset = "0x587D920", VA = "0x587E920")]
	private static float GetMaxObjectSize(BaseCharacter attacker, float hitSize)
	{
		return default(float);
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x587F2E0", Offset = "0x587E2E0", VA = "0x587F2E0")]
	private static float GetMaxHitSize(BaseCharacter attacker, float hitSize)
	{
		return default(float);
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x5880EB0", Offset = "0x587FEB0", VA = "0x5880EB0")]
	private static float GetHandSize(BaseTitan titan, float hitSize)
	{
		return default(float);
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x5880FE0", Offset = "0x587FFE0", VA = "0x5880FE0")]
	private static float GetHitSize(Collider collider)
	{
		return default(float);
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x5880820", Offset = "0x587F820", VA = "0x5880820")]
	private static void SpawnEffects(DestructibleMapObject target, Vector3 center, float hitSize)
	{
	}

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x58800C0", Offset = "0x587F0C0", VA = "0x58800C0")]
	private static void ReleaseHooks(DestructibleMapObject target)
	{
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x5882120", Offset = "0x5881120", VA = "0x5882120")]
	private static void ReleaseHooks(HookUseable useable, DestructibleMapObject target)
	{
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x587F2B0", Offset = "0x587E2B0", VA = "0x587F2B0")]
	private static bool IsFinite(Vector3 value)
	{
		return default(bool);
	}
}
