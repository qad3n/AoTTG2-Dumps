// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Util
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Util.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Util.cs
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
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.AI;

namespace Utility;

[Token(Token = "0x2000744")]
internal static class Util
{
	[Token(Token = "0x200074A")]
	[CompilerGenerated]
	private sealed class _003CWaitForFrames_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40022F7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40022F8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40022F9")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x40022FA")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000DBE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600474F")]
			[Address(RVA = "0x4397180", Offset = "0x4397180", VA = "0x4397180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DBF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004751")]
			[Address(RVA = "0x43971D0", Offset = "0x43971D0", VA = "0x43971D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600474C")]
		[Address(RVA = "0x4394E70", Offset = "0x4394E70", VA = "0x4394E70")]
		[DebuggerHidden]
		public _003CWaitForFrames_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600474D")]
		[Address(RVA = "0x43970D0", Offset = "0x43970D0", VA = "0x43970D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600474E")]
		[Address(RVA = "0x43970E0", Offset = "0x43970E0", VA = "0x43970E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004750")]
		[Address(RVA = "0x4397190", Offset = "0x4397190", VA = "0x4397190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200074B")]
	[CompilerGenerated]
	private sealed class _003CYieldForFrames_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40022FB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40022FC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40022FD")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x40022FE")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000DC0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004755")]
			[Address(RVA = "0x4397250", Offset = "0x4397250", VA = "0x4397250", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DC1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004757")]
			[Address(RVA = "0x43972A0", Offset = "0x43972A0", VA = "0x43972A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004752")]
		[Address(RVA = "0x4394EF0", Offset = "0x4394EF0", VA = "0x4394EF0")]
		[DebuggerHidden]
		public _003CYieldForFrames_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004753")]
		[Address(RVA = "0x43971E0", Offset = "0x43971E0", VA = "0x43971E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004754")]
		[Address(RVA = "0x43971F0", Offset = "0x43971F0", VA = "0x43971F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004756")]
		[Address(RVA = "0x4397260", Offset = "0x4397260", VA = "0x4397260", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40022E7")]
	[FieldOffset(Offset = "0x0")]
	public static List<KeyValuePair<float, string>> _titanSizes;

	[Token(Token = "0x6004702")]
	[Address(RVA = "0x4394050", Offset = "0x4394050", VA = "0x4394050")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[Token(Token = "0x6004703")]
	[Address(RVA = "0x43942A0", Offset = "0x43942A0", VA = "0x43942A0")]
	public static bool IsVectorBetween(Vector3 v, Vector3 start, Vector3 end)
	{
		return default(bool);
	}

	[Token(Token = "0x6004704")]
	[Address(RVA = "0x4394310", Offset = "0x4394310", VA = "0x4394310")]
	public static float LinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x6004705")]
	[Address(RVA = "0x4394330", Offset = "0x4394330", VA = "0x4394330")]
	public static float ClampedLinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x6004706")]
	[Address(RVA = "0x4394370", Offset = "0x4394370", VA = "0x4394370")]
	public static BaseCharacter FindCharacterByViewId(int viewId)
	{
		return null;
	}

	[Token(Token = "0x6004707")]
	[Address(RVA = "0x4394400", Offset = "0x4394400", VA = "0x4394400")]
	public static Player FindPlayerById(int id)
	{
		return null;
	}

	[Token(Token = "0x6004708")]
	[Address(RVA = "0x43944A0", Offset = "0x43944A0", VA = "0x43944A0")]
	public static PhotonMessageInfo CreateLocalPhotonInfo()
	{
		return default(PhotonMessageInfo);
	}

	[Token(Token = "0x6004709")]
	[Address(RVA = "0x43944D0", Offset = "0x43944D0", VA = "0x43944D0")]
	public static string PascalToSentence(string str)
	{
		return null;
	}

	[Token(Token = "0x600470A")]
	public static T CreateDontDestroyObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x600470B")]
	public static T CreateObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x600470C")]
	public static HashSet<T> RemoveNull<T>(HashSet<T> set) where T : UnityEngine.Object
	{
		return null;
	}

	[Token(Token = "0x600470D")]
	public static HashSet<T> RemoveNullOrDead<T>(HashSet<T> set) where T : BaseCharacter
	{
		return null;
	}

	[Token(Token = "0x600470E")]
	public static HashSet<T> RemoveNullOrDeadDetections<T>(HashSet<T> set) where T : BaseDetection
	{
		return null;
	}

	[Token(Token = "0x600470F")]
	[Address(RVA = "0x4394610", Offset = "0x4394610", VA = "0x4394610")]
	public static HashSet<BaseShifter> RemoveNullOrDeadShifters(HashSet<BaseShifter> set)
	{
		return null;
	}

	[Token(Token = "0x6004710")]
	[Address(RVA = "0x4394760", Offset = "0x4394760", VA = "0x4394760")]
	public static string CreateMD5(string input)
	{
		return null;
	}

	[Token(Token = "0x6004711")]
	[Address(RVA = "0x4394AE0", Offset = "0x4394AE0", VA = "0x4394AE0")]
	public static string CreateSalt()
	{
		return null;
	}

	[Token(Token = "0x6004712")]
	[Address(RVA = "0x4394CD0", Offset = "0x4394CD0", VA = "0x4394CD0")]
	public static string CreatePBKDF2(string input, string salt)
	{
		return null;
	}

	[Token(Token = "0x6004713")]
	[Address(RVA = "0x4394E10", Offset = "0x4394E10", VA = "0x4394E10")]
	[IteratorStateMachine(typeof(_003CWaitForFrames_003Ed__17))]
	public static IEnumerator WaitForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x6004714")]
	[Address(RVA = "0x4394E90", Offset = "0x4394E90", VA = "0x4394E90")]
	[IteratorStateMachine(typeof(_003CYieldForFrames_003Ed__18))]
	public static IEnumerator YieldForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x6004715")]
	public static string[] EnumToStringArray<T>()
	{
		return null;
	}

	[Token(Token = "0x6004716")]
	public static string[] EnumToStringArrayExceptNone<T>()
	{
		return null;
	}

	[Token(Token = "0x6004717")]
	public static List<T> EnumToList<T>()
	{
		return null;
	}

	[Token(Token = "0x6004718")]
	public static Dictionary<string, T> EnumToDict<T>()
	{
		return null;
	}

	[Token(Token = "0x6004719")]
	[Address(RVA = "0x4394F10", Offset = "0x4394F10", VA = "0x4394F10")]
	public static string FormatFloat(float num, int decimalPlaces)
	{
		return null;
	}

	[Token(Token = "0x600471A")]
	[Address(RVA = "0x4394F90", Offset = "0x4394F90", VA = "0x4394F90")]
	public static Vector3 MultiplyVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600471B")]
	[Address(RVA = "0x4394FA0", Offset = "0x4394FA0", VA = "0x4394FA0")]
	public static Vector2 MultiplyVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600471C")]
	[Address(RVA = "0x4394FB0", Offset = "0x4394FB0", VA = "0x4394FB0")]
	public static Vector3 DivideVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600471D")]
	[Address(RVA = "0x4394FC0", Offset = "0x4394FC0", VA = "0x4394FC0")]
	public static Vector2 DivideVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600471E")]
	public static List<List<T>> GroupItems<T>(List<T> items, int groupSize)
	{
		return null;
	}

	[Token(Token = "0x600471F")]
	public static List<List<T>> GroupBuckets<T>(List<T> items, int buckets)
	{
		return null;
	}

	[Token(Token = "0x6004720")]
	[Address(RVA = "0x4394FD0", Offset = "0x4394FD0", VA = "0x4394FD0")]
	public static object GetRandomFromWeightedList(List<object> values, List<float> weights)
	{
		return null;
	}

	[Token(Token = "0x6004721")]
	[Address(RVA = "0x4395210", Offset = "0x4395210", VA = "0x4395210")]
	public static object GetRandomFromWeightedNode(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004722")]
	[Address(RVA = "0x43955F0", Offset = "0x43955F0", VA = "0x43955F0")]
	public static float DistanceIgnoreY(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[Token(Token = "0x6004723")]
	public static List<TValue> PaginateDictionary<TKey, TValue>(Dictionary<TKey, TValue> dict, int pageNumber, int elementsPerPage)
	{
		return null;
	}

	[Token(Token = "0x6004724")]
	[Address(RVA = "0x4395630", Offset = "0x4395630", VA = "0x4395630")]
	public static string ColorText(string text, string color)
	{
		return null;
	}

	[Token(Token = "0x6004725")]
	[Address(RVA = "0x4395740", Offset = "0x4395740", VA = "0x4395740")]
	public static string SizeText(string text, int size)
	{
		return null;
	}

	[Token(Token = "0x6004726")]
	[Address(RVA = "0x43957A0", Offset = "0x43957A0", VA = "0x43957A0")]
	public static string RichTextTag(string text, string tag, string value)
	{
		return null;
	}

	[Token(Token = "0x6004727")]
	[Address(RVA = "0x4395940", Offset = "0x4395940", VA = "0x4395940")]
	public static Quaternion ConstrainedToX(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6004728")]
	[Address(RVA = "0x4395980", Offset = "0x4395980", VA = "0x4395980")]
	public static Quaternion ConstrainedToY(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6004729")]
	[Address(RVA = "0x43959C0", Offset = "0x43959C0", VA = "0x43959C0")]
	public static Quaternion ConstrainedToZ(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600472A")]
	[Address(RVA = "0x4395A00", Offset = "0x4395A00", VA = "0x4395A00")]
	public static List<int> GetAllTitanAgentIds()
	{
		return null;
	}

	[Token(Token = "0x600472B")]
	[Address(RVA = "0x4395D10", Offset = "0x4395D10", VA = "0x4395D10")]
	public static int GetNavMeshAgentIDBySize(float size)
	{
		return default(int);
	}

	[Token(Token = "0x600472C")]
	[Address(RVA = "0x4395F90", Offset = "0x4395F90", VA = "0x4395F90")]
	public static NavMeshBuildSettings GetAgentSettingsCorrected(float size)
	{
		return default(NavMeshBuildSettings);
	}

	[Token(Token = "0x600472D")]
	[Address(RVA = "0x4395E70", Offset = "0x4395E70", VA = "0x4395E70")]
	public static int? GetNavMeshAgentID(string name)
	{
		return null;
	}

	[Token(Token = "0x600472E")]
	[Address(RVA = "0x4396220", Offset = "0x4396220", VA = "0x4396220")]
	public static Vector3 Abs(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600472F")]
	public static T EnumMax<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6004730")]
	public static int EnumMaxValue<T>()
	{
		return default(int);
	}

	[Token(Token = "0x6004731")]
	[Address(RVA = "0x4396230", Offset = "0x4396230", VA = "0x4396230")]
	public static bool IsValidFileName(string fileName)
	{
		return default(bool);
	}

	[Token(Token = "0x6004732")]
	[Address(RVA = "0x43967A0", Offset = "0x43967A0", VA = "0x43967A0")]
	public static double GetPhotonTimestampDifference(double sentTime, double serverTime)
	{
		return default(double);
	}

	[Token(Token = "0x6004733")]
	[Address(RVA = "0x43967D0", Offset = "0x43967D0", VA = "0x43967D0")]
	private static bool ForceScalableParticleSystemMinMaxCurveMode(ParticleSystem.MinMaxCurve curve, out ParticleSystem.MinMaxCurve newCurve, float scale = 1f)
	{
		return default(bool);
	}

	[Token(Token = "0x6004734")]
	[Address(RVA = "0x43968D0", Offset = "0x43968D0", VA = "0x43968D0")]
	public static void ScaleParticleStartSize(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x6004735")]
	[Address(RVA = "0x43969C0", Offset = "0x43969C0", VA = "0x43969C0")]
	public static void ScaleParticleStartSpeed(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x6004736")]
	[Address(RVA = "0x4396AB0", Offset = "0x4396AB0", VA = "0x4396AB0")]
	public static bool IsValidResourcePath(string path)
	{
		return default(bool);
	}
}
