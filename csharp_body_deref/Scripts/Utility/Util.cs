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

[Token(Token = "0x20006F6")]
internal static class Util
{
	[Token(Token = "0x20006FC")]
	[CompilerGenerated]
	private sealed class _003CWaitForFrames_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400219A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400219B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400219C")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x400219D")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000D44")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60044E7")]
			[Address(RVA = "0x407F1A0", Offset = "0x407F1A0", VA = "0x407F1A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D45")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60044E9")]
			[Address(RVA = "0x407F1F0", Offset = "0x407F1F0", VA = "0x407F1F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60044E4")]
		[Address(RVA = "0x407CE90", Offset = "0x407CE90", VA = "0x407CE90")]
		[DebuggerHidden]
		public _003CWaitForFrames_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60044E5")]
		[Address(RVA = "0x407F0F0", Offset = "0x407F0F0", VA = "0x407F0F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60044E6")]
		[Address(RVA = "0x407F100", Offset = "0x407F100", VA = "0x407F100", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60044E8")]
		[Address(RVA = "0x407F1B0", Offset = "0x407F1B0", VA = "0x407F1B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006FD")]
	[CompilerGenerated]
	private sealed class _003CYieldForFrames_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400219E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400219F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40021A0")]
		[FieldOffset(Offset = "0x20")]
		public int frames;

		[Token(Token = "0x40021A1")]
		[FieldOffset(Offset = "0x24")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000D46")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60044ED")]
			[Address(RVA = "0x407F270", Offset = "0x407F270", VA = "0x407F270", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D47")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60044EF")]
			[Address(RVA = "0x407F2C0", Offset = "0x407F2C0", VA = "0x407F2C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60044EA")]
		[Address(RVA = "0x407CF10", Offset = "0x407CF10", VA = "0x407CF10")]
		[DebuggerHidden]
		public _003CYieldForFrames_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60044EB")]
		[Address(RVA = "0x407F200", Offset = "0x407F200", VA = "0x407F200", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60044EC")]
		[Address(RVA = "0x407F210", Offset = "0x407F210", VA = "0x407F210", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60044EE")]
		[Address(RVA = "0x407F280", Offset = "0x407F280", VA = "0x407F280", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400218A")]
	[FieldOffset(Offset = "0x0")]
	public static List<KeyValuePair<float, string>> _titanSizes;

	[Token(Token = "0x600449A")]
	[Address(RVA = "0x407C070", Offset = "0x407C070", VA = "0x407C070")]
	public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
	{
		return default(float);
	}

	[Token(Token = "0x600449B")]
	[Address(RVA = "0x407C2C0", Offset = "0x407C2C0", VA = "0x407C2C0")]
	public static bool IsVectorBetween(Vector3 v, Vector3 start, Vector3 end)
	{
		return default(bool);
	}

	[Token(Token = "0x600449C")]
	[Address(RVA = "0x407C330", Offset = "0x407C330", VA = "0x407C330")]
	public static float LinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x600449D")]
	[Address(RVA = "0x407C350", Offset = "0x407C350", VA = "0x407C350")]
	public static float ClampedLinearMap(float x, float inMin, float inMax, float outMin, float outMax)
	{
		return default(float);
	}

	[Token(Token = "0x600449E")]
	[Address(RVA = "0x407C390", Offset = "0x407C390", VA = "0x407C390")]
	public static BaseCharacter FindCharacterByViewId(int viewId)
	{
		return null;
	}

	[Token(Token = "0x600449F")]
	[Address(RVA = "0x407C420", Offset = "0x407C420", VA = "0x407C420")]
	public static Player FindPlayerById(int id)
	{
		return null;
	}

	[Token(Token = "0x60044A0")]
	[Address(RVA = "0x407C4C0", Offset = "0x407C4C0", VA = "0x407C4C0")]
	public static PhotonMessageInfo CreateLocalPhotonInfo()
	{
		return default(PhotonMessageInfo);
	}

	[Token(Token = "0x60044A1")]
	[Address(RVA = "0x407C4F0", Offset = "0x407C4F0", VA = "0x407C4F0")]
	public static string PascalToSentence(string str)
	{
		return null;
	}

	[Token(Token = "0x60044A2")]
	public static T CreateDontDestroyObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x60044A3")]
	public static T CreateObj<T>() where T : Component
	{
		return null;
	}

	[Token(Token = "0x60044A4")]
	public static HashSet<T> RemoveNull<T>(HashSet<T> set) where T : UnityEngine.Object
	{
		return null;
	}

	[Token(Token = "0x60044A5")]
	public static HashSet<T> RemoveNullOrDead<T>(HashSet<T> set) where T : BaseCharacter
	{
		return null;
	}

	[Token(Token = "0x60044A6")]
	public static HashSet<T> RemoveNullOrDeadDetections<T>(HashSet<T> set) where T : BaseDetection
	{
		return null;
	}

	[Token(Token = "0x60044A7")]
	[Address(RVA = "0x407C630", Offset = "0x407C630", VA = "0x407C630")]
	public static HashSet<BaseShifter> RemoveNullOrDeadShifters(HashSet<BaseShifter> set)
	{
		return null;
	}

	[Token(Token = "0x60044A8")]
	[Address(RVA = "0x407C780", Offset = "0x407C780", VA = "0x407C780")]
	public static string CreateMD5(string input)
	{
		return null;
	}

	[Token(Token = "0x60044A9")]
	[Address(RVA = "0x407CB00", Offset = "0x407CB00", VA = "0x407CB00")]
	public static string CreateSalt()
	{
		return null;
	}

	[Token(Token = "0x60044AA")]
	[Address(RVA = "0x407CCF0", Offset = "0x407CCF0", VA = "0x407CCF0")]
	public static string CreatePBKDF2(string input, string salt)
	{
		return null;
	}

	[Token(Token = "0x60044AB")]
	[Address(RVA = "0x407CE30", Offset = "0x407CE30", VA = "0x407CE30")]
	[IteratorStateMachine(typeof(_003CWaitForFrames_003Ed__17))]
	public static IEnumerator WaitForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x60044AC")]
	[Address(RVA = "0x407CEB0", Offset = "0x407CEB0", VA = "0x407CEB0")]
	[IteratorStateMachine(typeof(_003CYieldForFrames_003Ed__18))]
	public static IEnumerator YieldForFrames(int frames)
	{
		return null;
	}

	[Token(Token = "0x60044AD")]
	public static string[] EnumToStringArray<T>()
	{
		return null;
	}

	[Token(Token = "0x60044AE")]
	public static string[] EnumToStringArrayExceptNone<T>()
	{
		return null;
	}

	[Token(Token = "0x60044AF")]
	public static List<T> EnumToList<T>()
	{
		return null;
	}

	[Token(Token = "0x60044B0")]
	public static Dictionary<string, T> EnumToDict<T>()
	{
		return null;
	}

	[Token(Token = "0x60044B1")]
	[Address(RVA = "0x407CF30", Offset = "0x407CF30", VA = "0x407CF30")]
	public static string FormatFloat(float num, int decimalPlaces)
	{
		return null;
	}

	[Token(Token = "0x60044B2")]
	[Address(RVA = "0x407CFB0", Offset = "0x407CFB0", VA = "0x407CFB0")]
	public static Vector3 MultiplyVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60044B3")]
	[Address(RVA = "0x407CFC0", Offset = "0x407CFC0", VA = "0x407CFC0")]
	public static Vector2 MultiplyVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60044B4")]
	[Address(RVA = "0x407CFD0", Offset = "0x407CFD0", VA = "0x407CFD0")]
	public static Vector3 DivideVectors(Vector3 a, Vector3 b)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60044B5")]
	[Address(RVA = "0x407CFE0", Offset = "0x407CFE0", VA = "0x407CFE0")]
	public static Vector2 DivideVectors(Vector2 a, Vector2 b)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60044B6")]
	public static List<List<T>> GroupItems<T>(List<T> items, int groupSize)
	{
		return null;
	}

	[Token(Token = "0x60044B7")]
	public static List<List<T>> GroupBuckets<T>(List<T> items, int buckets)
	{
		return null;
	}

	[Token(Token = "0x60044B8")]
	[Address(RVA = "0x407CFF0", Offset = "0x407CFF0", VA = "0x407CFF0")]
	public static object GetRandomFromWeightedList(List<object> values, List<float> weights)
	{
		return null;
	}

	[Token(Token = "0x60044B9")]
	[Address(RVA = "0x407D230", Offset = "0x407D230", VA = "0x407D230")]
	public static object GetRandomFromWeightedNode(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60044BA")]
	[Address(RVA = "0x407D610", Offset = "0x407D610", VA = "0x407D610")]
	public static float DistanceIgnoreY(Vector3 a, Vector3 b)
	{
		return default(float);
	}

	[Token(Token = "0x60044BB")]
	public static List<TValue> PaginateDictionary<TKey, TValue>(Dictionary<TKey, TValue> dict, int pageNumber, int elementsPerPage)
	{
		return null;
	}

	[Token(Token = "0x60044BC")]
	[Address(RVA = "0x407D650", Offset = "0x407D650", VA = "0x407D650")]
	public static string ColorText(string text, string color)
	{
		return null;
	}

	[Token(Token = "0x60044BD")]
	[Address(RVA = "0x407D760", Offset = "0x407D760", VA = "0x407D760")]
	public static string SizeText(string text, int size)
	{
		return null;
	}

	[Token(Token = "0x60044BE")]
	[Address(RVA = "0x407D7C0", Offset = "0x407D7C0", VA = "0x407D7C0")]
	public static string RichTextTag(string text, string tag, string value)
	{
		return null;
	}

	[Token(Token = "0x60044BF")]
	[Address(RVA = "0x407D960", Offset = "0x407D960", VA = "0x407D960")]
	public static Quaternion ConstrainedToX(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60044C0")]
	[Address(RVA = "0x407D9A0", Offset = "0x407D9A0", VA = "0x407D9A0")]
	public static Quaternion ConstrainedToY(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60044C1")]
	[Address(RVA = "0x407D9E0", Offset = "0x407D9E0", VA = "0x407D9E0")]
	public static Quaternion ConstrainedToZ(Quaternion rotation)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60044C2")]
	[Address(RVA = "0x407DA20", Offset = "0x407DA20", VA = "0x407DA20")]
	public static List<int> GetAllTitanAgentIds()
	{
		return null;
	}

	[Token(Token = "0x60044C3")]
	[Address(RVA = "0x407DD30", Offset = "0x407DD30", VA = "0x407DD30")]
	public static int GetNavMeshAgentIDBySize(float size)
	{
		return default(int);
	}

	[Token(Token = "0x60044C4")]
	[Address(RVA = "0x407DFB0", Offset = "0x407DFB0", VA = "0x407DFB0")]
	public static NavMeshBuildSettings GetAgentSettingsCorrected(float size)
	{
		return default(NavMeshBuildSettings);
	}

	[Token(Token = "0x60044C5")]
	[Address(RVA = "0x407DE90", Offset = "0x407DE90", VA = "0x407DE90")]
	public static int? GetNavMeshAgentID(string name)
	{
		return null;
	}

	[Token(Token = "0x60044C6")]
	[Address(RVA = "0x407E240", Offset = "0x407E240", VA = "0x407E240")]
	public static Vector3 Abs(Vector3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60044C7")]
	public static T EnumMax<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60044C8")]
	public static int EnumMaxValue<T>()
	{
		return default(int);
	}

	[Token(Token = "0x60044C9")]
	[Address(RVA = "0x407E250", Offset = "0x407E250", VA = "0x407E250")]
	public static bool IsValidFileName(string fileName)
	{
		return default(bool);
	}

	[Token(Token = "0x60044CA")]
	[Address(RVA = "0x407E7C0", Offset = "0x407E7C0", VA = "0x407E7C0")]
	public static double GetPhotonTimestampDifference(double sentTime, double serverTime)
	{
		return default(double);
	}

	[Token(Token = "0x60044CB")]
	[Address(RVA = "0x407E7F0", Offset = "0x407E7F0", VA = "0x407E7F0")]
	private static bool ForceScalableParticleSystemMinMaxCurveMode(ParticleSystem.MinMaxCurve curve, out ParticleSystem.MinMaxCurve newCurve, float scale = 1f)
	{
		return default(bool);
	}

	[Token(Token = "0x60044CC")]
	[Address(RVA = "0x407E8F0", Offset = "0x407E8F0", VA = "0x407E8F0")]
	public static void ScaleParticleStartSize(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x60044CD")]
	[Address(RVA = "0x407E9E0", Offset = "0x407E9E0", VA = "0x407E9E0")]
	public static void ScaleParticleStartSpeed(ParticleSystem.MainModule main, float scale)
	{
	}

	[Token(Token = "0x60044CE")]
	[Address(RVA = "0x407EAD0", Offset = "0x407EAD0", VA = "0x407EAD0")]
	public static bool IsValidResourcePath(string path)
	{
		return default(bool);
	}
}
