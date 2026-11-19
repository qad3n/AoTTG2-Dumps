// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.SkyboxCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/SkyboxCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/SkyboxCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x20003C2")]
internal class SkyboxCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003C3")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001352")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001353")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001354")]
		[FieldOffset(Offset = "0x20")]
		public SkyboxCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001355")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4001356")]
		[FieldOffset(Offset = "0x30")]
		private List<int>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000294")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017F9")]
			[Address(RVA = "0x5862630", Offset = "0x5861630", VA = "0x5862630", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000295")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017FB")]
			[Address(RVA = "0x5862680", Offset = "0x5861680", VA = "0x5862680", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x5861E90", Offset = "0x5860E90", VA = "0x5861E90")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x5862180", Offset = "0x5861180", VA = "0x5862180", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60017F7")]
		[Address(RVA = "0x58621D0", Offset = "0x58611D0", VA = "0x58621D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017F8")]
		[Address(RVA = "0x58625F0", Offset = "0x58615F0", VA = "0x58625F0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60017FA")]
		[Address(RVA = "0x5862640", Offset = "0x5861640", VA = "0x5862640", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001351")]
	[FieldOffset(Offset = "0x0")]
	public static Material SkyboxMaterial;

	[Token(Token = "0x17000293")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017EF")]
		[Address(RVA = "0x5861D30", Offset = "0x5860D30", VA = "0x5861D30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x5861D60", Offset = "0x5860D60", VA = "0x5861D60")]
	public static Material CreateSkyboxMaterial()
	{
		return null;
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x5861E10", Offset = "0x5860E10", VA = "0x5861E10", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__4))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x5861EB0", Offset = "0x5860EB0", VA = "0x5861EB0", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x5862020", Offset = "0x5861020", VA = "0x5862020")]
	public string PartIdToTextureName(SkyboxCustomSkinPartId partId)
	{
		return null;
	}

	[Token(Token = "0x60017F4")]
	[Address(RVA = "0x5862110", Offset = "0x5861110", VA = "0x5862110")]
	public SkyboxCustomSkinLoader()
	{
	}
}
