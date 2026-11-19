// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicEvaluator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicEvaluator.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Map;
using Photon.Realtime;
using Settings;
using UnityEngine;
using Utility;

namespace CustomLogic;

[Token(Token = "0x200064C")]
internal class CustomLogicEvaluator
{
	[Token(Token = "0x2000650")]
	[CompilerGenerated]
	private sealed class _003CEvaluateBlockCoroutine_003Ed__87 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<CustomLogicBaseAst> statements;

		[Token(Token = "0x4001C08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x4001C09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CustomLogicClassInstance classInstance;

		[Token(Token = "0x4001C0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Dictionary<string, object> localVariables;

		[Token(Token = "0x4001C0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConditionalEvalState _003CconditionalState_003E5__2;

		[Token(Token = "0x4001C0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private List<CustomLogicBaseAst>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001C0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private CustomLogicBaseAst _003Cstatement_003E5__4;

		[Token(Token = "0x4001C0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003Ctime_003E5__5;

		[Token(Token = "0x4001C0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private CustomLogicConditionalBlockAst _003Cconditional_003E5__6;

		[Token(Token = "0x4001C10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private CoroutineWithData _003Ccwd_003E5__7;

		[Token(Token = "0x4001C11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CustomLogicForBlockAst _003CforBlock_003E5__8;

		[Token(Token = "0x4001C12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private List<object>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x17000A8E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003CE8")]
			[Address(RVA = "0x5A8F360", Offset = "0x5A8E360", VA = "0x5A8F360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A8F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003CEA")]
			[Address(RVA = "0x5A8F3B0", Offset = "0x5A8E3B0", VA = "0x5A8F3B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003CE3")]
		[Address(RVA = "0x5A8D8A0", Offset = "0x5A8C8A0", VA = "0x5A8D8A0")]
		[DebuggerHidden]
		public _003CEvaluateBlockCoroutine_003Ed__87(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003CE4")]
		[Address(RVA = "0x5A8D8C0", Offset = "0x5A8C8C0", VA = "0x5A8D8C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003CE5")]
		[Address(RVA = "0x5A8D9E0", Offset = "0x5A8C9E0", VA = "0x5A8D9E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003CE6")]
		[Address(RVA = "0x5A8F320", Offset = "0x5A8E320", VA = "0x5A8F320")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6003CE7")]
		[Address(RVA = "0x5A8F2D0", Offset = "0x5A8E2D0", VA = "0x5A8F2D0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6003CE9")]
		[Address(RVA = "0x5A8F370", Offset = "0x5A8E370", VA = "0x5A8F370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000651")]
	[CompilerGenerated]
	private sealed class _003COnSecond_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x17000A90")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003CEE")]
			[Address(RVA = "0x5A8F770", Offset = "0x5A8E770", VA = "0x5A8F770", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A91")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003CF0")]
			[Address(RVA = "0x5A8F7C0", Offset = "0x5A8E7C0", VA = "0x5A8F7C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003CEB")]
		[Address(RVA = "0x5A8F3C0", Offset = "0x5A8E3C0", VA = "0x5A8F3C0")]
		[DebuggerHidden]
		public _003COnSecond_003Ed__18(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003CEC")]
		[Address(RVA = "0x5A8F3E0", Offset = "0x5A8E3E0", VA = "0x5A8F3E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003CED")]
		[Address(RVA = "0x5A8F3F0", Offset = "0x5A8E3F0", VA = "0x5A8F3F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003CEF")]
		[Address(RVA = "0x5A8F780", Offset = "0x5A8E780", VA = "0x5A8F780", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001BDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _networkCallback;

	[Token(Token = "0x4001BDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<object> emptyList;

	[Token(Token = "0x4001BDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public float CurrentTime;

	[Token(Token = "0x4001BE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool HasSetMusic;

	[Token(Token = "0x4001BE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Dictionary<int, CustomLogicNetworkViewBuiltin> IdToNetworkView;

	[Token(Token = "0x4001BE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Dictionary<string, CustomLogicNetworkViewBuiltin> AddonToNetworkView;

	[Token(Token = "0x4001BE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Dictionary<int, CustomLogicMapObjectBuiltin> IdToMapObjectBuiltin;

	[Token(Token = "0x4001BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected CustomLogicStartAst _start;

	[Token(Token = "0x4001BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected Dictionary<string, CustomLogicClassInstance> _staticClasses;

	[Token(Token = "0x4001BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, CustomLogicClassInstance> _addonClasses;

	[Token(Token = "0x4001BE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> _namespacedStaticClasses;

	[Token(Token = "0x4001BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Dictionary<string, List<CustomLogicClassInstance>> _callbacks;

	[Token(Token = "0x4001BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public Dictionary<int, Dictionary<string, float>> PlayerIdToLastPropertyChanges;

	[Token(Token = "0x4001BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public string ScoreboardHeader;

	[Token(Token = "0x4001BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ScoreboardProperty;

	[Token(Token = "0x4001BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly object[] EmptyArgs;

	[Token(Token = "0x4001BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public bool DefaultShowKillScore;

	[Token(Token = "0x4001BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x81")]
	public bool DefaultShowKillFeed;

	[Token(Token = "0x4001BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x82")]
	public bool DefaultAddKillScore;

	[Token(Token = "0x4001BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x83")]
	public bool ShowScoreboardLoadout;

	[Token(Token = "0x4001BF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public bool ShowScoreboardStatus;

	[Token(Token = "0x4001BF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string ForcedCharacterType;

	[Token(Token = "0x4001BF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public string ForcedLoadout;

	[Token(Token = "0x4001BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Stack<(string className, string methodName, CustomLogicSourceType? ns)> _executionStack;

	[Token(Token = "0x4001BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private int _currentLineNumber;

	[Token(Token = "0x4001BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public object[] Parameters3;

	[Token(Token = "0x4001BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string add;

	[Token(Token = "0x4001BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string sub;

	[Token(Token = "0x4001BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string mul;

	[Token(Token = "0x4001BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string div;

	[Token(Token = "0x4001BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private string mod;

	[Token(Token = "0x4001BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private string eq;

	[Token(Token = "0x4001C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string copy;

	[Token(Token = "0x17000A8B")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003CBE")]
		[Address(RVA = "0x5A886A0", Offset = "0x5A876A0", VA = "0x5A886A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003CBF")]
		[Address(RVA = "0x5A886B0", Offset = "0x5A876B0", VA = "0x5A886B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A8C")]
	public bool CaptureErrors
	{
		[Token(Token = "0x6003CC0")]
		[Address(RVA = "0x5A886D0", Offset = "0x5A876D0", VA = "0x5A886D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003CC1")]
		[Address(RVA = "0x5A886E0", Offset = "0x5A876E0", VA = "0x5A886E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8D")]
	public List<CustomLogicError> CapturedErrors
	{
		[Token(Token = "0x6003CC2")]
		[Address(RVA = "0x5A886F0", Offset = "0x5A876F0", VA = "0x5A886F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003CC3")]
		[Address(RVA = "0x5A88700", Offset = "0x5A87700", VA = "0x5A88700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003C92")]
	[Address(RVA = "0x5A7A300", Offset = "0x5A79300", VA = "0x5A7A300")]
	public void Start(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x6003C93")]
	[Address(RVA = "0x5A82C30", Offset = "0x5A81C30", VA = "0x5A82C30")]
	protected void AddCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6003C94")]
	[Address(RVA = "0x5A832F0", Offset = "0x5A822F0", VA = "0x5A832F0")]
	protected void RemoveCallbacks(CustomLogicClassInstance instance)
	{
	}

	[Token(Token = "0x6003C95")]
	[Address(RVA = "0x5A7B690", Offset = "0x5A7A690", VA = "0x5A7B690")]
	public void OnTick()
	{
	}

	[Token(Token = "0x6003C96")]
	[Address(RVA = "0x5A7BA20", Offset = "0x5A7AA20", VA = "0x5A7BA20")]
	public void OnFrame()
	{
	}

	[Token(Token = "0x6003C97")]
	[Address(RVA = "0x5A7BB50", Offset = "0x5A7AB50", VA = "0x5A7BB50")]
	public void OnLateFrame()
	{
	}

	[Token(Token = "0x6003C98")]
	[Address(RVA = "0x5A83590", Offset = "0x5A82590", VA = "0x5A83590")]
	public void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003C99")]
	[Address(RVA = "0x5A83690", Offset = "0x5A82690", VA = "0x5A83690")]
	public void OnPlayerSpawn(Player player, BaseCharacter character)
	{
	}

	[Token(Token = "0x6003C9A")]
	[Address(RVA = "0x5A83810", Offset = "0x5A82810", VA = "0x5A83810")]
	public void OnCharacterSpawn(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003C9B")]
	[Address(RVA = "0x5A83940", Offset = "0x5A82940", VA = "0x5A83940")]
	public void OnCharacterReloaded(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003C9C")]
	[Address(RVA = "0x5A83A70", Offset = "0x5A82A70", VA = "0x5A83A70")]
	public void OnCharacterDie(BaseCharacter victim, BaseCharacter killer, string killerName)
	{
	}

	[Token(Token = "0x6003C9D")]
	[Address(RVA = "0x5A83BE0", Offset = "0x5A82BE0", VA = "0x5A83BE0")]
	public void OnCharacterDamaged(BaseCharacter victim, BaseCharacter killer, string killerName, int damage)
	{
	}

	[Token(Token = "0x6003C9E")]
	[Address(RVA = "0x5A83DC0", Offset = "0x5A82DC0", VA = "0x5A83DC0")]
	public object OnChatInput(string message)
	{
		return null;
	}

	[Token(Token = "0x6003C9F")]
	[Address(RVA = "0x5A84260", Offset = "0x5A83260", VA = "0x5A84260")]
	public void OnPlayerJoin(Player player)
	{
	}

	[Token(Token = "0x6003CA0")]
	[Address(RVA = "0x5A843E0", Offset = "0x5A833E0", VA = "0x5A843E0")]
	public void OnPlayerLeave(Player player)
	{
	}

	[Token(Token = "0x6003CA1")]
	[Address(RVA = "0x5A844C0", Offset = "0x5A834C0", VA = "0x5A844C0")]
	public void OnNetworkMessage(Player sender, string message, double sentServerTimestamp)
	{
	}

	[Token(Token = "0x6003CA2")]
	[Address(RVA = "0x5A6AAA0", Offset = "0x5A69AA0", VA = "0x5A6AAA0")]
	public static CustomLogicCharacterBuiltin GetCharacterBuiltin(BaseCharacter character)
	{
		return null;
	}

	[Token(Token = "0x6003CA3")]
	[Address(RVA = "0x5A830F0", Offset = "0x5A820F0", VA = "0x5A830F0")]
	[IteratorStateMachine(typeof(_003COnSecond_003Ed__18))]
	private IEnumerator OnSecond()
	{
		return null;
	}

	[Token(Token = "0x6003CA4")]
	[Address(RVA = "0x5A818D0", Offset = "0x5A808D0", VA = "0x5A818D0")]
	private void Init()
	{
	}

	[Token(Token = "0x6003CA5")]
	[Address(RVA = "0x5A85000", Offset = "0x5A84000", VA = "0x5A85000")]
	private void CreateAddonNetworkChannels()
	{
	}

	[Token(Token = "0x6003CA6")]
	[Address(RVA = "0x5A82F70", Offset = "0x5A81F70", VA = "0x5A82F70")]
	private void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x6003CA7")]
	[Address(RVA = "0x5A856E0", Offset = "0x5A846E0", VA = "0x5A856E0")]
	public void LoadMapObjectComponents(MapObject obj, bool init = false)
	{
	}

	[Token(Token = "0x6003CA8")]
	[Address(RVA = "0x5A6FF50", Offset = "0x5A6EF50", VA = "0x5A6FF50")]
	public bool LoadRuntimeMapObjectComponents(MapObject obj, bool init = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6003CA9")]
	[Address(RVA = "0x5A860A0", Offset = "0x5A850A0", VA = "0x5A860A0")]
	public CustomLogicComponentInstance AddMapObjectComponent(MapObject obj, string componentName)
	{
		return null;
	}

	[Token(Token = "0x6003CAA")]
	[Address(RVA = "0x5A86760", Offset = "0x5A85760", VA = "0x5A86760")]
	public void RemoveComponent(CustomLogicComponentInstance instance)
	{
	}

	[Token(Token = "0x6003CAB")]
	[Address(RVA = "0x5A85C80", Offset = "0x5A84C80", VA = "0x5A85C80")]
	public CustomLogicComponentInstance CreateComponentInstance(string className, MapObject obj, MapScriptComponent script)
	{
		return null;
	}

	[Token(Token = "0x6003CAC")]
	[Address(RVA = "0x5A86790", Offset = "0x5A85790", VA = "0x5A86790")]
	private void FindSubcolliders(Transform t, HashSet<GameObject> set)
	{
	}

	[Token(Token = "0x6003CAD")]
	[Address(RVA = "0x5A857F0", Offset = "0x5A847F0", VA = "0x5A857F0")]
	public CustomLogicMapObjectBuiltin SetupMapObject(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003CAE")]
	[Address(RVA = "0x5A6C380", Offset = "0x5A6B380", VA = "0x5A6C380")]
	public CustomLogicMapObjectBuiltin GetOrCreateMapObjectBuiltin(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003CAF")]
	[Address(RVA = "0x5A85900", Offset = "0x5A84900", VA = "0x5A85900")]
	public CustomLogicPhotonSync SetupNetworking(MapObject obj)
	{
		return null;
	}

	[Token(Token = "0x6003CB0")]
	[Address(RVA = "0x5A86BA0", Offset = "0x5A85BA0", VA = "0x5A86BA0")]
	public string GetLineNumberString(int lineNumber)
	{
		return null;
	}

	[Token(Token = "0x6003CB1")]
	[Address(RVA = "0x5A83160", Offset = "0x5A82160", VA = "0x5A83160")]
	private void LogCustomLogicError(string errorMessage, bool showInChat)
	{
	}

	[Token(Token = "0x6003CB2")]
	[Address(RVA = "0x5A86BD0", Offset = "0x5A85BD0", VA = "0x5A86BD0")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6003CB3")]
	[Address(RVA = "0x5A86BE0", Offset = "0x5A85BE0", VA = "0x5A86BE0")]
	public Dictionary<string, CustomLogicClassInstance> GetStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x6003CB4")]
	[Address(RVA = "0x5A86BF0", Offset = "0x5A85BF0", VA = "0x5A86BF0")]
	public Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> GetNamespacedStaticClasses()
	{
		return null;
	}

	[Token(Token = "0x6003CB5")]
	[Address(RVA = "0x5A77610", Offset = "0x5A76610", VA = "0x5A77610")]
	public Dictionary<string, BaseSetting> GetModeSettings()
	{
		return null;
	}

	[Token(Token = "0x6003CB6")]
	[Address(RVA = "0x5A787E0", Offset = "0x5A777E0", VA = "0x5A787E0")]
	public Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettings()
	{
		return null;
	}

	[Token(Token = "0x6003CB7")]
	[Address(RVA = "0x5A87160", Offset = "0x5A86160", VA = "0x5A87160")]
	public Dictionary<string, BaseSetting> GetComponentSettings(string component, List<string> parameters)
	{
		return null;
	}

	[Token(Token = "0x6003CB8")]
	[Address(RVA = "0x5A86C10", Offset = "0x5A85C10", VA = "0x5A86C10")]
	private BaseSetting CreateInspectorSetting(string className, string variableName, object value)
	{
		return null;
	}

	[Token(Token = "0x6003CB9")]
	[Address(RVA = "0x5A6D350", Offset = "0x5A6C350", VA = "0x5A6D350")]
	public object ApplyComponentInspectorRules(string className, string variableName, object value)
	{
		return null;
	}

	[Token(Token = "0x6003CBA")]
	[Address(RVA = "0x5A879A0", Offset = "0x5A869A0", VA = "0x5A879A0")]
	private static InspectorSettingMetadata CreateInspectorMetadata(CustomLogicAssignmentExpressionAst assignment)
	{
		return null;
	}

	[Token(Token = "0x6003CBB")]
	[Address(RVA = "0x5A88250", Offset = "0x5A87250", VA = "0x5A88250")]
	public List<string> GetComponentNames()
	{
		return null;
	}

	[Token(Token = "0x6003CBC")]
	[Address(RVA = "0x5A88610", Offset = "0x5A87610", VA = "0x5A88610")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		return null;
	}

	[Token(Token = "0x6003CBD")]
	[Address(RVA = "0x5A84720", Offset = "0x5A83720", VA = "0x5A84720")]
	public void CreateStaticClass(string className)
	{
	}

	[Token(Token = "0x6003CC4")]
	[Address(RVA = "0x5A78210", Offset = "0x5A77210", VA = "0x5A78210")]
	public CustomLogicEvaluator(CustomLogicStartAst start, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6003CC5")]
	[Address(RVA = "0x5A88720", Offset = "0x5A87720", VA = "0x5A88720")]
	public void ClearCapturedErrors()
	{
	}

	[Token(Token = "0x6003CC6")]
	[Address(RVA = "0x5A86C00", Offset = "0x5A85C00", VA = "0x5A86C00")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init = true)
	{
		return null;
	}

	[Token(Token = "0x6003CC7")]
	[Address(RVA = "0x5A84880", Offset = "0x5A83880", VA = "0x5A84880")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? callerNamespace)
	{
		return null;
	}

	[Token(Token = "0x6003CC8")]
	[Address(RVA = "0x5A88780", Offset = "0x5A87780", VA = "0x5A88780")]
	private CustomLogicClassInstance CreateUserClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? classNamespace)
	{
		return null;
	}

	[Token(Token = "0x6003CC9")]
	[Address(RVA = "0x5A84B50", Offset = "0x5A83B50", VA = "0x5A84B50")]
	public void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
	}

	[Token(Token = "0x6003CCA")]
	[Address(RVA = "0x5A89BA0", Offset = "0x5A88BA0", VA = "0x5A89BA0")]
	[IteratorStateMachine(typeof(_003CEvaluateBlockCoroutine_003Ed__87))]
	private IEnumerator EvaluateBlockCoroutine(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements)
	{
		return null;
	}

	[Token(Token = "0x6003CCB")]
	[Address(RVA = "0x5A89C50", Offset = "0x5A88C50", VA = "0x5A89C50")]
	private bool EvaluateBlock(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements, out object result)
	{
		return default(bool);
	}

	[Token(Token = "0x6003CCC")]
	[Address(RVA = "0x5A8A9E0", Offset = "0x5A899E0", VA = "0x5A8A9E0")]
	private void EvaluateAssignmentExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicAssignmentExpressionAst assignment)
	{
	}

	[Token(Token = "0x6003CCD")]
	[Address(RVA = "0x5A6DB20", Offset = "0x5A6CB20", VA = "0x5A6DB20")]
	public bool HasMethod(CustomLogicClassInstance classInstance, string methodName)
	{
		return default(bool);
	}

	[Token(Token = "0x6003CCE")]
	[Address(RVA = "0x5A6DC80", Offset = "0x5A6CC80", VA = "0x5A6DC80")]
	public object EvaluateMethod(CustomLogicClassInstance classInstance, string methodName, [Optional] object[] parameterValues, int callerLineNumber = 0)
	{
		return null;
	}

	[Token(Token = "0x6003CCF")]
	[Address(RVA = "0x5A8B7E0", Offset = "0x5A8A7E0", VA = "0x5A8B7E0")]
	public object EvaluateMethod(UserMethod userMethod, [Optional] object[] parameterValues)
	{
		return null;
	}

	[Token(Token = "0x6003CD0")]
	[Address(RVA = "0x5A88830", Offset = "0x5A87830", VA = "0x5A88830")]
	private object EvaluateExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicBaseExpressionAst expression)
	{
		return null;
	}

	[Token(Token = "0x6003CD1")]
	[Address(RVA = "0x5A8C3B0", Offset = "0x5A8B3B0", VA = "0x5A8C3B0")]
	private object EvaluateUnaryExpression(CustomLogicSymbol symbol, object next)
	{
		return null;
	}

	[Token(Token = "0x6003CD2")]
	[Address(RVA = "0x5A8C460", Offset = "0x5A8B460", VA = "0x5A8C460")]
	private object EvaluateBinopExpression(CustomLogicSymbol symbol, object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003CD3")]
	[Address(RVA = "0x5A8CC80", Offset = "0x5A8BC80", VA = "0x5A8CC80")]
	private object ClassMathOperation(object left, object right, string method)
	{
		return null;
	}

	[Token(Token = "0x6003CD4")]
	[Address(RVA = "0x5A8B050", Offset = "0x5A8A050", VA = "0x5A8B050")]
	private object AddValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003CD5")]
	[Address(RVA = "0x5A8B2C0", Offset = "0x5A8A2C0", VA = "0x5A8B2C0")]
	private object SubtractValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003CD6")]
	[Address(RVA = "0x5A8B440", Offset = "0x5A8A440", VA = "0x5A8B440")]
	private object MultiplyValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003CD7")]
	[Address(RVA = "0x5A8B5C0", Offset = "0x5A8A5C0", VA = "0x5A8B5C0")]
	private object DivideValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003CD8")]
	[Address(RVA = "0x5A8C6D0", Offset = "0x5A8B6D0", VA = "0x5A8C6D0")]
	private object ModuloValues(object left, object right)
	{
		return null;
	}

	[Token(Token = "0x6003CD9")]
	[Address(RVA = "0x5A8C860", Offset = "0x5A8B860", VA = "0x5A8C860")]
	public bool CheckEquals(object left, object right)
	{
		return default(bool);
	}

	[Token(Token = "0x6003CDA")]
	public static T ConvertTo<T>(object obj)
	{
		return (T)null;
	}
}
