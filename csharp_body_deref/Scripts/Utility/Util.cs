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

[Token(Token = "0x20008CD")]
internal static class Util
{
	[Token(Token = "0x20008D3")]
	[CompilerGenerated]
	private sealed class _003CWaitForFrames_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002BBC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002BBD")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002BBE")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x4002BBF")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000F1F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60053B7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F20")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60053B9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60053B4")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitForFrames_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60053B5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60053B6")]
		[Address(RVA = "0x2340F00", Offset = "0x233F500", VA = "0x182340F00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60053B8")]
		[Address(RVA = "0x2340FA0", Offset = "0x233F5A0", VA = "0x182340FA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20008D4")]
	[CompilerGenerated]
	private sealed class _003CYieldForFrames_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002BC0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002BC1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002BC2")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x4002BC3")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000F21")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60053BD")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F22")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60053BF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60053BA")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CYieldForFrames_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60053BB")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60053BC")]
		[Address(RVA = "0x2340FE0", Offset = "0x233F5E0", VA = "0x182340FE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60053BE")]
		[Address(RVA = "0x2341040", Offset = "0x233F640", VA = "0x182341040", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002BAC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<KeyValuePair<float, string>> _agentSizes;

	[Token(Token = "0x6005368")]
	[Address(RVA = "0x23437E0", Offset = "0x2341DE0", VA = "0x1823437E0")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[Token(Token = "0x6005369")]
	[Address(RVA = "0x23430C0", Offset = "0x23416C0", VA = "0x1823430C0")]
	public static bool IsVectorBetween(Vector3 v, Vector3 start, Vector3 end)
	{
		return default(bool);
	}

	[Token(Token = "0x600536A")]
	[Address(RVA = "0x2343170", Offset = "0x2341770", VA = "0x182343170")]
	public static float LinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x600536B")]
	[Address(RVA = "0x2341080", Offset = "0x233F680", VA = "0x182341080")]
	public static float ClampedLinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x600536C")]
	[Address(RVA = "0x23418F0", Offset = "0x233FEF0", VA = "0x1823418F0")]
	public static BaseCharacter FindCharacterByViewId(int viewId)
	{
		return null;
	}

	[Token(Token = "0x600536D")]
	[Address(RVA = "0x2341980", Offset = "0x233FF80", VA = "0x182341980")]
	public static Player FindPlayerById(int id)
	{
		return null;
	}

	[Token(Token = "0x600536E")]
	[Address(RVA = "0x2341390", Offset = "0x233F990", VA = "0x182341390")]
	public static PhotonMessageInfo CreateLocalPhotonInfo()
	{
		return default(PhotonMessageInfo);
	}

	[Token(Token = "0x600536F")]
	[Address(RVA = "0x2343210", Offset = "0x2341810", VA = "0x182343210")]
	public static string PascalToSentence(string str)
	{
		return null;
	}

	[Token(Token = "0x6005370")]
	public static T CreateDontDestroyObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6005371")]
	public static T CreateObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x6005372")]
	public static HashSet<T> RemoveNull<T>(HashSet<T> set) where T : UnityEngine.Object
	{
		return null;
	}

	[Token(Token = "0x6005373")]
	public static HashSet<T> RemoveNullOrDead<T>(HashSet<T> set) where T : BaseCharacter
	{
		return null;
	}

	[Token(Token = "0x6005374")]
	public static HashSet<T> RemoveNullOrDeadDetections<T>(HashSet<T> set) where T : BaseDetection
	{
		return null;
	}

	[Token(Token = "0x6005375")]
	[Address(RVA = "0x2343350", Offset = "0x2341950", VA = "0x182343350")]
	public static HashSet<BaseShifter> RemoveNullOrDeadShifters(HashSet<BaseShifter> set)
	{
		return null;
	}

	[Token(Token = "0x6005376")]
	[Address(RVA = "0x23413C0", Offset = "0x233F9C0", VA = "0x1823413C0")]
	public static string CreateMD5(string input)
	{
		return null;
	}

	[Token(Token = "0x6005377")]
	[Address(RVA = "0x2341720", Offset = "0x233FD20", VA = "0x182341720")]
	public static string CreateSalt()
	{
		return null;
	}

	[Token(Token = "0x6005378")]
	[Address(RVA = "0x23415C0", Offset = "0x233FBC0", VA = "0x1823415C0")]
	public static string CreatePBKDF2(string input, string salt)
	{
		return null;
	}

	[Token(Token = "0x6005379")]
	[Address(RVA = "0x2343CD0", Offset = "0x23422D0", VA = "0x182343CD0")]
	[IteratorStateMachine(typeof(_003CWaitForFrames_003Ed__17))]
	public static IEnumerator WaitForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x600537A")]
	[Address(RVA = "0x2343D30", Offset = "0x2342330", VA = "0x182343D30")]
	[IteratorStateMachine(typeof(_003CYieldForFrames_003Ed__18))]
	public static IEnumerator YieldForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x600537B")]
	public static string[] EnumToStringArray<T>()
	{
		return null;
	}

	[Token(Token = "0x600537C")]
	public static string[] EnumToStringArrayExceptNone<T>()
	{
		return null;
	}

	[Token(Token = "0x600537D")]
	public static List<T> EnumToList<T>()
	{
		return null;
	}

	[Token(Token = "0x600537E")]
	public static Dictionary<string, T> EnumToDict<T>()
	{
		return null;
	}

	[Token(Token = "0x600537F")]
	[Address(RVA = "0x2341B60", Offset = "0x2340160", VA = "0x182341B60")]
	public static string FormatFloat(float num, int decimalPlaces)
	{
		return null;
	}

	[Token(Token = "0x6005380")]
	[Address(RVA = "0x23431D0", Offset = "0x23417D0", VA = "0x1823431D0")]
	public static Vector3 MultiplyVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6005381")]
	[Address(RVA = "0x2343190", Offset = "0x2341790", VA = "0x182343190")]
	public static Vector2 MultiplyVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6005382")]
	[Address(RVA = "0x2341870", Offset = "0x233FE70", VA = "0x182341870")]
	public static Vector3 DivideVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6005383")]
	[Address(RVA = "0x23418B0", Offset = "0x233FEB0", VA = "0x1823418B0")]
	public static Vector2 DivideVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6005384")]
	public static List<List<T>> GroupItems<T>(List<T> items, int groupSize)
	{
		return null;
	}

	[Token(Token = "0x6005385")]
	public static List<List<T>> GroupBuckets<T>(List<T> items, int buckets)
	{
		return null;
	}

	[Token(Token = "0x6005386")]
	[Address(RVA = "0x2342560", Offset = "0x2340B60", VA = "0x182342560")]
	public static object GetRandomFromWeightedList(List<object> values, List<float> weights)
	{
		return null;
	}

	[Token(Token = "0x6005387")]
	[Address(RVA = "0x2342770", Offset = "0x2340D70", VA = "0x182342770")]
	public static object GetRandomFromWeightedNode(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6005388")]
	[Address(RVA = "0x2341830", Offset = "0x233FE30", VA = "0x182341830")]
	public static float DistanceIgnoreY(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[Token(Token = "0x6005389")]
	public static List<TValue> PaginateDictionary<TKey, TValue>(Dictionary<TKey, TValue> dict, int pageNumber, int elementsPerPage)
	{
		return null;
	}

	[Token(Token = "0x600538A")]
	[Address(RVA = "0x23410C0", Offset = "0x233F6C0", VA = "0x1823410C0")]
	public static string ColorText(string text, string color)
	{
		return null;
	}

	[Token(Token = "0x600538B")]
	[Address(RVA = "0x23438C0", Offset = "0x2341EC0", VA = "0x1823438C0")]
	public static string SizeText(string text, int size)
	{
		return null;
	}

	[Token(Token = "0x600538C")]
	[Address(RVA = "0x2343470", Offset = "0x2341A70", VA = "0x182343470")]
	public static string RichTextTag(string text, string tag, string value)
	{
		return null;
	}

	[Token(Token = "0x600538D")]
	[Address(RVA = "0x23411E0", Offset = "0x233F7E0", VA = "0x1823411E0")]
	public static Quaternion ConstrainedToX(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600538E")]
	[Address(RVA = "0x2341270", Offset = "0x233F870", VA = "0x182341270")]
	public static Quaternion ConstrainedToY(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600538F")]
	[Address(RVA = "0x2341300", Offset = "0x233F900", VA = "0x182341300")]
	public static Quaternion ConstrainedToZ(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6005390")]
	[Address(RVA = "0x2342110", Offset = "0x2340710", VA = "0x182342110")]
	public static List<int> GetAllTitanAgentIds()
	{
		return null;
	}

	[Token(Token = "0x6005391")]
	[Address(RVA = "0x2341CF0", Offset = "0x23402F0", VA = "0x182341CF0")]
	private static KeyValuePair<float, string> GetAgentSizeBucket(float size)
	{
		return default(KeyValuePair<float, string>);
	}

	[Token(Token = "0x6005392")]
	[Address(RVA = "0x2341BF0", Offset = "0x23401F0", VA = "0x182341BF0")]
	public static NavMeshBuildSettings GetAgentSettings(float size, out float bucketSize)
	{
		return default(NavMeshBuildSettings);
	}

	[Token(Token = "0x6005393")]
	[Address(RVA = "0x2341ED0", Offset = "0x23404D0", VA = "0x182341ED0")]
	public static float GetAgentSize(CapsuleCollider collider)
	{
		return default(float);
	}

	[Token(Token = "0x6005394")]
	[Address(RVA = "0x2342420", Offset = "0x2340A20", VA = "0x182342420")]
	public static int? GetNavMeshAgentID(string name)
	{
		return null;
	}

	[Token(Token = "0x6005395")]
	[Address(RVA = "0x5854C0", Offset = "0x583AC0", VA = "0x1805854C0")]
	public static Vector3 Abs(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6005396")]
	[Address(RVA = "0x2343920", Offset = "0x2341F20", VA = "0x182343920")]
	public static Bounds TransformBounds(Bounds bounds, Matrix4x4 matrix)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6005397")]
	public static T EnumMax<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6005398")]
	public static int EnumMaxValue<T>()
	{
		return default(int);
	}

	[Token(Token = "0x6005399")]
	[Address(RVA = "0x2342AC0", Offset = "0x23410C0", VA = "0x182342AC0")]
	public static bool IsValidFileName(string fileName)
	{
		return default(bool);
	}

	[Token(Token = "0x600539A")]
	[Address(RVA = "0x2342530", Offset = "0x2340B30", VA = "0x182342530")]
	public static double GetPhotonTimestampDifference(double sentTime, double serverTime)
	{
		return default(double);
	}

	[Token(Token = "0x600539B")]
	[Address(RVA = "0x2341A10", Offset = "0x2340010", VA = "0x182341A10")]
	private static bool ForceScalableParticleSystemMinMaxCurveMode(ParticleSystem.MinMaxCurve curve, out ParticleSystem.MinMaxCurve newCurve, float scale = 1f)
	{
		return default(bool);
	}

	[Token(Token = "0x600539C")]
	[Address(RVA = "0x2343600", Offset = "0x2341C00", VA = "0x182343600")]
	public static void ScaleParticleStartSize(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x600539D")]
	[Address(RVA = "0x23436F0", Offset = "0x2341CF0", VA = "0x1823436F0")]
	public static void ScaleParticleStartSpeed(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x600539E")]
	[Address(RVA = "0x2342FF0", Offset = "0x23415F0", VA = "0x182342FF0")]
	public static bool IsValidResourcePath(string path)
	{
		return default(bool);
	}
}
