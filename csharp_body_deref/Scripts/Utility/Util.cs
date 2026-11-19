// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Util
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000938")]
internal static class Util
{
	[Token(Token = "0x200093E")]
	[CompilerGenerated]
	private sealed class _003CWaitForFrames_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002E78")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002E79")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002E7A")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x4002E7B")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000F03")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005714")]
			[Address(RVA = "0x5CF4560", Offset = "0x5CF3560", VA = "0x5CF4560", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F04")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005716")]
			[Address(RVA = "0x5CF45B0", Offset = "0x5CF35B0", VA = "0x5CF45B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005711")]
		[Address(RVA = "0x5CF1D70", Offset = "0x5CF0D70", VA = "0x5CF1D70")]
		[DebuggerHidden]
		public _003CWaitForFrames_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005712")]
		[Address(RVA = "0x5CF44B0", Offset = "0x5CF34B0", VA = "0x5CF44B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005713")]
		[Address(RVA = "0x5CF44C0", Offset = "0x5CF34C0", VA = "0x5CF44C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005715")]
		[Address(RVA = "0x5CF4570", Offset = "0x5CF3570", VA = "0x5CF4570", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200093F")]
	[CompilerGenerated]
	private sealed class _003CYieldForFrames_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002E7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002E7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002E7E")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x4002E7F")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000F05")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600571A")]
			[Address(RVA = "0x5CF4630", Offset = "0x5CF3630", VA = "0x5CF4630", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F06")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600571C")]
			[Address(RVA = "0x5CF4680", Offset = "0x5CF3680", VA = "0x5CF4680", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005717")]
		[Address(RVA = "0x5CF1DF0", Offset = "0x5CF0DF0", VA = "0x5CF1DF0")]
		[DebuggerHidden]
		public _003CYieldForFrames_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005718")]
		[Address(RVA = "0x5CF45C0", Offset = "0x5CF35C0", VA = "0x5CF45C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005719")]
		[Address(RVA = "0x5CF45D0", Offset = "0x5CF35D0", VA = "0x5CF45D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600571B")]
		[Address(RVA = "0x5CF4640", Offset = "0x5CF3640", VA = "0x5CF4640", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002E67")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<KeyValuePair<float, string>> _agentSizes;

	[Token(Token = "0x4002E68")]
	[FieldOffset(Offset = "0x8")]
	private static readonly HashSet<string> ReservedFileNames;

	[Token(Token = "0x60056C3")]
	[Address(RVA = "0x5CF10B0", Offset = "0x5CF00B0", VA = "0x5CF10B0")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[Token(Token = "0x60056C4")]
	[Address(RVA = "0x5CF1320", Offset = "0x5CF0320", VA = "0x5CF1320")]
	public static bool IsVectorBetween(Vector3 v, Vector3 start, Vector3 end)
	{
		return default(bool);
	}

	[Token(Token = "0x60056C5")]
	[Address(RVA = "0x5CF1390", Offset = "0x5CF0390", VA = "0x5CF1390")]
	public static float LinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x60056C6")]
	[Address(RVA = "0x5CF13B0", Offset = "0x5CF03B0", VA = "0x5CF13B0")]
	public static float ClampedLinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x60056C7")]
	[Address(RVA = "0x5CF13E0", Offset = "0x5CF03E0", VA = "0x5CF13E0")]
	public static BaseCharacter FindCharacterByViewId(int viewId)
	{
		return null;
	}

	[Token(Token = "0x60056C8")]
	[Address(RVA = "0x5CF1470", Offset = "0x5CF0470", VA = "0x5CF1470")]
	public static Player FindPlayerById(int id)
	{
		return null;
	}

	[Token(Token = "0x60056C9")]
	[Address(RVA = "0x5CF1510", Offset = "0x5CF0510", VA = "0x5CF1510")]
	public static PhotonMessageInfo CreateLocalPhotonInfo()
	{
		return default(PhotonMessageInfo);
	}

	[Token(Token = "0x60056CA")]
	[Address(RVA = "0x5CF1540", Offset = "0x5CF0540", VA = "0x5CF1540")]
	public static string PascalToSentence(string str)
	{
		return null;
	}

	[Token(Token = "0x60056CB")]
	public static T CreateDontDestroyObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x60056CC")]
	public static T CreateObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x60056CD")]
	public static HashSet<T> RemoveNull<T>(HashSet<T> set) where T : UnityEngine.Object
	{
		return null;
	}

	[Token(Token = "0x60056CE")]
	public static HashSet<T> RemoveNullOrDead<T>(HashSet<T> set) where T : BaseCharacter
	{
		return null;
	}

	[Token(Token = "0x60056CF")]
	public static HashSet<T> RemoveNullOrDeadDetections<T>(HashSet<T> set) where T : BaseDetection
	{
		return null;
	}

	[Token(Token = "0x60056D0")]
	[Address(RVA = "0x5CF1680", Offset = "0x5CF0680", VA = "0x5CF1680")]
	public static HashSet<BaseShifter> RemoveNullOrDeadShifters(HashSet<BaseShifter> set)
	{
		return null;
	}

	[Token(Token = "0x60056D1")]
	[Address(RVA = "0x5CF17D0", Offset = "0x5CF07D0", VA = "0x5CF17D0")]
	public static string CreateMD5(string input)
	{
		return null;
	}

	[Token(Token = "0x60056D2")]
	[Address(RVA = "0x5CF1AA0", Offset = "0x5CF0AA0", VA = "0x5CF1AA0")]
	public static string CreateSalt()
	{
		return null;
	}

	[Token(Token = "0x60056D3")]
	[Address(RVA = "0x5CF1C30", Offset = "0x5CF0C30", VA = "0x5CF1C30")]
	public static string CreatePBKDF2(string input, string salt)
	{
		return null;
	}

	[Token(Token = "0x60056D4")]
	[Address(RVA = "0x5CE7300", Offset = "0x5CE6300", VA = "0x5CE7300")]
	[IteratorStateMachine(typeof(_003CWaitForFrames_003Ed__17))]
	public static IEnumerator WaitForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x60056D5")]
	[Address(RVA = "0x5CF1D90", Offset = "0x5CF0D90", VA = "0x5CF1D90")]
	[IteratorStateMachine(typeof(_003CYieldForFrames_003Ed__18))]
	public static IEnumerator YieldForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x60056D6")]
	public static string[] EnumToStringArray<T>()
	{
		return null;
	}

	[Token(Token = "0x60056D7")]
	public static string[] EnumToStringArrayExceptNone<T>()
	{
		return null;
	}

	[Token(Token = "0x60056D8")]
	public static List<T> EnumToList<T>()
	{
		return null;
	}

	[Token(Token = "0x60056D9")]
	public static Dictionary<string, T> EnumToDict<T>()
	{
		return null;
	}

	[Token(Token = "0x60056DA")]
	[Address(RVA = "0x5CF1E10", Offset = "0x5CF0E10", VA = "0x5CF1E10")]
	public static string FormatFloat(float num, int decimalPlaces)
	{
		return null;
	}

	[Token(Token = "0x60056DB")]
	[Address(RVA = "0x5CF1E90", Offset = "0x5CF0E90", VA = "0x5CF1E90")]
	public static Vector3 MultiplyVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60056DC")]
	[Address(RVA = "0x5CF1EA0", Offset = "0x5CF0EA0", VA = "0x5CF1EA0")]
	public static Vector2 MultiplyVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60056DD")]
	[Address(RVA = "0x5CF1EB0", Offset = "0x5CF0EB0", VA = "0x5CF1EB0")]
	public static Vector3 DivideVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60056DE")]
	[Address(RVA = "0x5CF1EC0", Offset = "0x5CF0EC0", VA = "0x5CF1EC0")]
	public static Vector2 DivideVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60056DF")]
	public static List<List<T>> GroupItems<T>(List<T> items, int groupSize)
	{
		return null;
	}

	[Token(Token = "0x60056E0")]
	public static List<List<T>> GroupBuckets<T>(List<T> items, int buckets)
	{
		return null;
	}

	[Token(Token = "0x60056E1")]
	[Address(RVA = "0x5CF1ED0", Offset = "0x5CF0ED0", VA = "0x5CF1ED0")]
	public static object GetRandomFromWeightedList(List<object> values, List<float> weights)
	{
		return null;
	}

	[Token(Token = "0x60056E2")]
	[Address(RVA = "0x5CF20F0", Offset = "0x5CF10F0", VA = "0x5CF20F0")]
	public static object GetRandomFromWeightedNode(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60056E3")]
	[Address(RVA = "0x5CF2470", Offset = "0x5CF1470", VA = "0x5CF2470")]
	public static float DistanceIgnoreY(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[Token(Token = "0x60056E4")]
	public static List<TValue> PaginateDictionary<TKey, TValue>(Dictionary<TKey, TValue> dict, int pageNumber, int elementsPerPage)
	{
		return null;
	}

	[Token(Token = "0x60056E5")]
	[Address(RVA = "0x5CF24B0", Offset = "0x5CF14B0", VA = "0x5CF24B0")]
	public static string ColorText(string text, string color)
	{
		return null;
	}

	[Token(Token = "0x60056E6")]
	[Address(RVA = "0x5CF25D0", Offset = "0x5CF15D0", VA = "0x5CF25D0")]
	public static string SizeText(string text, int size)
	{
		return null;
	}

	[Token(Token = "0x60056E7")]
	[Address(RVA = "0x5CF2630", Offset = "0x5CF1630", VA = "0x5CF2630")]
	public static string RichTextTag(string text, string tag, string value)
	{
		return null;
	}

	[Token(Token = "0x60056E8")]
	[Address(RVA = "0x5CF27D0", Offset = "0x5CF17D0", VA = "0x5CF27D0")]
	public static Quaternion ConstrainedToX(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60056E9")]
	[Address(RVA = "0x5CF2830", Offset = "0x5CF1830", VA = "0x5CF2830")]
	public static Quaternion ConstrainedToY(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60056EA")]
	[Address(RVA = "0x5CF28A0", Offset = "0x5CF18A0", VA = "0x5CF28A0")]
	public static Quaternion ConstrainedToZ(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60056EB")]
	[Address(RVA = "0x5CF2900", Offset = "0x5CF1900", VA = "0x5CF2900")]
	public static List<int> GetAllTitanAgentIds()
	{
		return null;
	}

	[Token(Token = "0x60056EC")]
	[Address(RVA = "0x5CF2C10", Offset = "0x5CF1C10", VA = "0x5CF2C10")]
	private static KeyValuePair<float, string> GetAgentSizeBucket(float size)
	{
		return default(KeyValuePair<float, string>);
	}

	[Token(Token = "0x60056ED")]
	[Address(RVA = "0x5CF2DE0", Offset = "0x5CF1DE0", VA = "0x5CF2DE0")]
	public static NavMeshBuildSettings GetAgentSettings(float size, out float bucketSize)
	{
		return default(NavMeshBuildSettings);
	}

	[Token(Token = "0x60056EE")]
	[Address(RVA = "0x5CF2FF0", Offset = "0x5CF1FF0", VA = "0x5CF2FF0")]
	public static float GetAgentSize(CapsuleCollider collider)
	{
		return default(float);
	}

	[Token(Token = "0x60056EF")]
	[Address(RVA = "0x5CF2ED0", Offset = "0x5CF1ED0", VA = "0x5CF2ED0")]
	public static int? GetNavMeshAgentID(string name)
	{
		return null;
	}

	[Token(Token = "0x60056F0")]
	[Address(RVA = "0x5CF31A0", Offset = "0x5CF21A0", VA = "0x5CF31A0")]
	public static Vector3 Abs(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60056F1")]
	[Address(RVA = "0x5CF31B0", Offset = "0x5CF21B0", VA = "0x5CF31B0")]
	public static Bounds TransformBounds(Bounds bounds, Matrix4x4 matrix)
	{
		return default(Bounds);
	}

	[Token(Token = "0x60056F2")]
	public static T EnumMax<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60056F3")]
	public static int EnumMaxValue<T>()
	{
		return default(int);
	}

	[Token(Token = "0x60056F4")]
	[Address(RVA = "0x5CF3590", Offset = "0x5CF2590", VA = "0x5CF3590")]
	public static bool IsValidFileName(string fileName)
	{
		return default(bool);
	}

	[Token(Token = "0x60056F5")]
	[Address(RVA = "0x5CF3740", Offset = "0x5CF2740", VA = "0x5CF3740")]
	public static bool IsReservedFileName(string fileName)
	{
		return default(bool);
	}

	[Token(Token = "0x60056F6")]
	[Address(RVA = "0x5CEE0E0", Offset = "0x5CED0E0", VA = "0x5CEE0E0")]
	public static bool IsFileAccessError(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x60056F7")]
	[Address(RVA = "0x5CF37E0", Offset = "0x5CF27E0", VA = "0x5CF37E0")]
	public static double GetPhotonTimestampDifference(double sentTime, double serverTime)
	{
		return default(double);
	}

	[Token(Token = "0x60056F8")]
	[Address(RVA = "0x5CF3810", Offset = "0x5CF2810", VA = "0x5CF3810")]
	private static bool ForceScalableParticleSystemMinMaxCurveMode(ParticleSystem.MinMaxCurve curve, out ParticleSystem.MinMaxCurve newCurve, float scale = 1f)
	{
		return default(bool);
	}

	[Token(Token = "0x60056F9")]
	[Address(RVA = "0x5CF3910", Offset = "0x5CF2910", VA = "0x5CF3910")]
	public static void ScaleParticleStartSize(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x60056FA")]
	[Address(RVA = "0x5CF39E0", Offset = "0x5CF29E0", VA = "0x5CF39E0")]
	public static void ScaleParticleStartSpeed(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x60056FB")]
	[Address(RVA = "0x5CF3AB0", Offset = "0x5CF2AB0", VA = "0x5CF3AB0")]
	public static bool IsValidResourcePath(string path)
	{
		return default(bool);
	}
}
