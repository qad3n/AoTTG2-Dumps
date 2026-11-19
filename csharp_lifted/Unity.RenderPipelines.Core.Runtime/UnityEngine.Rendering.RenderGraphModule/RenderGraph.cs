// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraph
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;
using UnityEngine.Rendering.RendererUtils;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200023F")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public class RenderGraph
{
	[Token(Token = "0x2000240")]
	internal class DebugExecutionItem
	{
		[Token(Token = "0x1700021E")]
		public EntityId id
		{
			[Token(Token = "0x600107F")]
			[Address(RVA = "0x656DD40", Offset = "0x656CD40", VA = "0x656DD40")]
			[CompilerGenerated]
			get
			{
				return default(EntityId);
			}
		}

		[Token(Token = "0x1700021F")]
		public string name
		{
			[Token(Token = "0x6001080")]
			[Address(RVA = "0x656DD50", Offset = "0x656CD50", VA = "0x656DD50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001081")]
		[Address(RVA = "0x656BF00", Offset = "0x656AF00", VA = "0x656BF00")]
		public DebugExecutionItem(EntityId id, string name)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000241")]
	internal class DebugData
	{
		[Serializable]
		[Token(Token = "0x2000242")]
		public class ResourceLists<T>
		{
			[Token(Token = "0x4000A42")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			[SerializeField]
			private List<T> m_Textures;

			[Token(Token = "0x4000A43")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			[SerializeField]
			private List<T> m_Buffers;

			[Token(Token = "0x4000A44")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			[SerializeField]
			private List<T> m_AccelerationStructures;

			[Token(Token = "0x17000220")]
			public List<T> this[int index]
			{
				[Token(Token = "0x6001084")]
				get
				{
					return null;
				}
				[Token(Token = "0x6001085")]
				set
				{
				}
			}

			[Token(Token = "0x6001086")]
			public void Clear()
			{
			}

			[Token(Token = "0x6001087")]
			public ResourceLists()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x2000243")]
		public class ResourceDataLists : ResourceLists<ResourceData>
		{
			[Token(Token = "0x6001088")]
			[Address(RVA = "0x656DE60", Offset = "0x656CE60", VA = "0x656DE60")]
			public ResourceDataLists()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x2000244")]
		public class SerializableNativePassAttachment
		{
			[Token(Token = "0x4000A45")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public RenderBufferLoadAction loadAction;

			[Token(Token = "0x4000A46")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public RenderBufferStoreAction storeAction;

			[Token(Token = "0x4000A47")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public bool memoryless;

			[Token(Token = "0x4000A48")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			public int mipLevel;

			[Token(Token = "0x4000A49")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public int depthSlice;

			[Token(Token = "0x6001089")]
			[Address(RVA = "0x656DEA0", Offset = "0x656CEA0", VA = "0x656DEA0")]
			public SerializableNativePassAttachment(NativePassAttachment att)
			{
			}
		}

		[Serializable]
		[Token(Token = "0x2000245")]
		[DebuggerDisplay("PassDebug: {name}")]
		public struct PassData
		{
			[Serializable]
			[Token(Token = "0x2000246")]
			public class ResourceIdLists : ResourceLists<int>
			{
				[Token(Token = "0x600108A")]
				[Address(RVA = "0x656D960", Offset = "0x656C960", VA = "0x656D960")]
				public ResourceIdLists()
				{
				}
			}

			[Serializable]
			[Token(Token = "0x2000247")]
			public class NRPInfo
			{
				[Serializable]
				[Token(Token = "0x2000248")]
				public class NativeRenderPassInfo
				{
					[Serializable]
					[Token(Token = "0x2000249")]
					public class AttachmentInfo
					{
						[Token(Token = "0x4000A62")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
						public string resourceName;

						[Token(Token = "0x4000A63")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
						public string loadReason;

						[Token(Token = "0x4000A64")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
						public string storeReason;

						[Token(Token = "0x4000A65")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
						public string storeMsaaReason;

						[Token(Token = "0x4000A66")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
						public int attachmentIndex;

						[Token(Token = "0x4000A67")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
						public SerializableNativePassAttachment attachment;

						[Token(Token = "0x600108D")]
						[Address(RVA = "0x656DF90", Offset = "0x656CF90", VA = "0x656DF90")]
						public AttachmentInfo()
						{
						}
					}

					[Serializable]
					[Token(Token = "0x200024A")]
					public struct PassCompatibilityInfo
					{
						[Token(Token = "0x4000A68")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
						public string message;

						[Token(Token = "0x4000A69")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
						public bool isCompatible;
					}

					[Token(Token = "0x4000A5E")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
					public string passBreakReasoning;

					[Token(Token = "0x4000A5F")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
					public List<AttachmentInfo> attachmentInfos;

					[Token(Token = "0x4000A60")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
					public SerializedDictionary<int, PassCompatibilityInfo> passCompatibility;

					[Token(Token = "0x4000A61")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
					public List<int> mergedPassIds;

					[Token(Token = "0x600108C")]
					[Address(RVA = "0x656DF80", Offset = "0x656CF80", VA = "0x656DF80")]
					public NativeRenderPassInfo()
					{
					}
				}

				[Token(Token = "0x4000A56")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
				[SerializeReference]
				public NativeRenderPassInfo nativePassInfo;

				[Token(Token = "0x4000A57")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
				public List<int> textureFBFetchList;

				[Token(Token = "0x4000A58")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
				public List<int> setGlobals;

				[Token(Token = "0x4000A59")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
				public int width;

				[Token(Token = "0x4000A5A")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
				public int height;

				[Token(Token = "0x4000A5B")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
				public int volumeDepth;

				[Token(Token = "0x4000A5C")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
				public int samples;

				[Token(Token = "0x4000A5D")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
				public bool hasDepth;

				[Token(Token = "0x600108B")]
				[Address(RVA = "0x656DED0", Offset = "0x656CED0", VA = "0x656DED0")]
				public NRPInfo()
				{
				}
			}

			[Token(Token = "0x4000A4A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string name;

			[Token(Token = "0x4000A4B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public RenderGraphPassType type;

			[Token(Token = "0x4000A4C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public ResourceIdLists resourceReadLists;

			[Token(Token = "0x4000A4D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public ResourceIdLists resourceWriteLists;

			[Token(Token = "0x4000A4E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public bool culled;

			[Token(Token = "0x4000A4F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
			public bool async;

			[Token(Token = "0x4000A50")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
			public int nativeSubPassIndex;

			[Token(Token = "0x4000A51")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public int syncToPassIndex;

			[Token(Token = "0x4000A52")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
			public int syncFromPassIndex;

			[Token(Token = "0x4000A53")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			public bool generateDebugData;

			[Token(Token = "0x4000A54")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
			[SerializeReference]
			public NRPInfo nrpInfo;

			[Token(Token = "0x4000A55")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
			public PassScriptInfo scriptInfo;
		}

		[Serializable]
		[Token(Token = "0x200024B")]
		public class BufferResourceData
		{
			[Token(Token = "0x4000A6A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public int count;

			[Token(Token = "0x4000A6B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public int stride;

			[Token(Token = "0x4000A6C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public GraphicsBuffer.Target target;

			[Token(Token = "0x4000A6D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			public GraphicsBuffer.UsageFlags usage;

			[Token(Token = "0x600108E")]
			[Address(RVA = "0x656D950", Offset = "0x656C950", VA = "0x656D950")]
			public BufferResourceData()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x200024C")]
		public class TextureResourceData
		{
			[Token(Token = "0x4000A6E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public int width;

			[Token(Token = "0x4000A6F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public int height;

			[Token(Token = "0x4000A70")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public int depth;

			[Token(Token = "0x4000A71")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			public bool bindMS;

			[Token(Token = "0x4000A72")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public int samples;

			[Token(Token = "0x4000A73")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
			public GraphicsFormat format;

			[Token(Token = "0x4000A74")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public bool clearBuffer;

			[Token(Token = "0x600108F")]
			[Address(RVA = "0x656D940", Offset = "0x656C940", VA = "0x656D940")]
			public TextureResourceData()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x200024D")]
		[DebuggerDisplay("ResourceDebug: {name} [{creationPassIndex}:{releasePassIndex}]")]
		public struct ResourceData
		{
			[Token(Token = "0x4000A75")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string name;

			[Token(Token = "0x4000A76")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public bool imported;

			[Token(Token = "0x4000A77")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public int creationPassIndex;

			[Token(Token = "0x4000A78")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public int releasePassIndex;

			[Token(Token = "0x4000A79")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public List<int> consumerList;

			[Token(Token = "0x4000A7A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public List<int> producerList;

			[Token(Token = "0x4000A7B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public bool memoryless;

			[Token(Token = "0x4000A7C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			[SerializeReference]
			public TextureResourceData textureData;

			[Token(Token = "0x4000A7D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
			[SerializeReference]
			public BufferResourceData bufferData;
		}

		[Serializable]
		[Token(Token = "0x200024E")]
		public struct PassScriptInfo
		{
			[Token(Token = "0x4000A7E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string filePath;

			[Token(Token = "0x4000A7F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public int line;
		}

		[Token(Token = "0x4000A3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string executionName;

		[Token(Token = "0x4000A3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public bool valid;

		[Token(Token = "0x4000A3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public int graphHash;

		[Token(Token = "0x4000A3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool isNRPCompiler;

		[Token(Token = "0x4000A40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public List<PassData> passList;

		[Token(Token = "0x4000A41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ResourceDataLists resourceLists;

		[Token(Token = "0x6001082")]
		[Address(RVA = "0x656DD60", Offset = "0x656CD60", VA = "0x656DD60")]
		public DebugData(string executionName)
		{
		}

		[Token(Token = "0x6001083")]
		[Address(RVA = "0x656C090", Offset = "0x656B090", VA = "0x656C090")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x200024F")]
	internal static class DebugDataSerialization
	{
		[Token(Token = "0x6001090")]
		[Address(RVA = "0x655E0C0", Offset = "0x655D0C0", VA = "0x655E0C0")]
		public static string ToJson(DebugData debugData)
		{
			return null;
		}

		[Token(Token = "0x6001091")]
		[Address(RVA = "0x655E110", Offset = "0x655D110", VA = "0x655E110")]
		public static DebugData FromJson(string json)
		{
			return null;
		}
	}

	[Token(Token = "0x2000250")]
	internal static class RenderGraphExceptionMessages
	{
		[Token(Token = "0x4000A80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static bool enableCaller;

		[Token(Token = "0x4000A81")]
		internal const string k_RenderGraphExecutionError = "Render Graph Execution error";

		[Token(Token = "0x4000A82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly Dictionary<RenderGraphState, string> m_RenderGraphStateMessages;

		[Token(Token = "0x4000A83")]
		private const string k_ErrorDefaultMessage = "Invalid render graph state, impossible to log the exception.";

		[Token(Token = "0x4000A84")]
		internal const string k_NonTextureAsAttachmentError = "Only textures can be used as a fragment attachment.";

		[Token(Token = "0x4000A85")]
		internal const string k_OneResourceTwoVersionsError = "A pass is using SetAttachment or UseTexture on two versions of the same resource. Make sure you only access the latest version.";

		[Token(Token = "0x4000A86")]
		internal const string k_UseTextureRandWriteTwoVersionsError = "A pass is using UseTextureRandomWrite on two versions of the same resource.  Make sure you only access the latest version.";

		[Token(Token = "0x4000A87")]
		internal const string k_InvalidGetRenderTargetInfoResultsError = "GetRenderTargetInfo returned invalid results. Check that the width, height, and number of MSAA samples is not 0.";

		[Token(Token = "0x4000A88")]
		internal const string k_CannotDetermineSubPassFlagNoDepth = "SubPassFlag for merging cannot be determined if native pass doesn't have a depth attachment. Make sure your pass has a depth attachment.";

		[Token(Token = "0x4000A89")]
		internal const string k_AddingOlderAttachmentVersion = "The pass adds an older version while a higher version is already registered with the pass. Make sure you only access the latest version.";

		[Token(Token = "0x4000A8A")]
		internal const string k_NonIncrementalCreationCall = "Something went wrong when compiling the graph. The Creation lists must be set-up incrementally for all passes, but AddFirstUse is called in an arbitrary non-incremental way.";

		[Token(Token = "0x4000A8B")]
		internal const string k_NonIncrementalDestructionCall = "Something went wrong when compiling the graph. The Destruction lists must be set-up incrementally for all passes, AddLastUse is called in an arbitrary non-incremental way.";

		[Token(Token = "0x4000A8C")]
		internal const string k_UndisposedBuilderPreviousPass = "Finish building the previous pass first by disposing of the pass builder object before adding a new pass. You can manually dispose of the builder with 'builder.Dispose()'.";

		[Token(Token = "0x4000A8D")]
		internal const string k_WriteToVersionedResource = "The pass writes to a versioned resource handle. You can only write to unversioned resource handles to avoid branches in the resource history.";

		[Token(Token = "0x4000A8E")]
		internal const string k_WriteToResourceTwice = "The pass writes to a resource twice. You can only write the same resource once within a pass.";

		[Token(Token = "0x4000A8F")]
		internal const string k_TextureAlreadyBeingUsedThroughSetAttachment = "UseTexture is called on a texture that is already used through SetRenderAttachment. Check your code and make sure the texture is only used once.";

		[Token(Token = "0x4000A90")]
		internal const string k_SetRenderAttachmentTextureAlreadyUsed = "SetRenderAttachment is called on a texture that is already used through UseTexture/SetRenderAttachment. Check your code and make sure the texture is only used once.";

		[Token(Token = "0x4000A91")]
		internal const string k_SetRenderAttachmentOnDepthTexture = "SetRenderAttachment is called on a texture that has a depth format. Use a texture with a color format instead, or call SetRenderDepthAttachment.";

		[Token(Token = "0x4000A92")]
		internal const string k_SetRenderAttachmentOnGlobalTexture = "SetRenderAttachment is called on a texture that is currently bound to a global texture slot. Shaders might be using the texture using samplers. Make sure textures are not set as globals when using them as fragment attachments.";

		[Token(Token = "0x4000A93")]
		internal const string k_InvalidResource = "Using an invalid resource. Invalid resources can be resources leftover from a previous execution.";

		[Token(Token = "0x4000A94")]
		internal const string k_ReadWriteTransient = "This pass is reading or writing a transient resource. Transient resources are always assumed to be both read and written using 'AccessFlags.ReadWrite'.";

		[Token(Token = "0x4000A95")]
		internal const string k_MoreThanOneResourceForMRTIndex = "You can only bind a single texture to a single index in a multiple render texture (MRT). Verify your indexes are correct.";

		[Token(Token = "0x4000A96")]
		internal const string k_MoreThanOneTextureForFragInputIndex = "You can only bind a single texture to a fragment input index. Verify your indexes are correct.";

		[Token(Token = "0x4000A97")]
		internal const string k_MoreThanOneTextureRandomWriteInputIndex = "You can only bind a single texture to a random write input index. Verify your indexes are correct.";

		[Token(Token = "0x4000A98")]
		internal const string k_MultipleDepthTextures = "You can only set a single depth texture per pass.";

		[Token(Token = "0x4000A99")]
		internal const string k_LoadingMemorylessResource = "This pass is loading a resource marked as memoryless.";

		[Token(Token = "0x4000A9A")]
		internal const string k_ResolvignMemorylessResource = "This pass is storing or resolving a resource marked as memoryless";

		[Token(Token = "0x4000A9B")]
		internal const string k_RenderPassIsEmpty = "Empty render pass";

		[Token(Token = "0x4000A9C")]
		internal const string k_RenderPassHasInvalidProperties = "Invalid render pass properties. One or more properties are zero.";

		[Token(Token = "0x4000A9D")]
		internal const string k_ShadingRateImageAttachmentDoesNotMatch = "Low level rendergraph error: Shading rate image attachment in renderpass does not match.";

		[Token(Token = "0x4000A9E")]
		internal const string k_AttachmentsDoNotMatch = "Low level rendergraph error: Attachments in renderpass do not match.";

		[Token(Token = "0x4000A9F")]
		internal const string k_MultisampledShaderResolveInvalidAttachmentSetup = "Low level rendergraph error: last subpass with shader resolve must have one color attachment.";

		[Token(Token = "0x4000AA0")]
		internal const string k_MultisampledShaderResolveInputAttachmentNotMemoryless = "Low level rendergraph error: last subpass with shader resolve must have all input attachments as memoryless attachments.";

		[Token(Token = "0x4000AA1")]
		internal const string k_InvalidMRTSetup = "Multiple render texture (MRT) setup is invalid. Some indices are not used.";

		[Token(Token = "0x4000AA2")]
		internal const string k_NoDepthBufferMRT = "Setting multiple render textures (MRTs) without a depth buffer is not supported.";

		[Token(Token = "0x4000AA3")]
		internal const string k_InvalidDepthAndColorTargets = "Neither depth nor color render targets are correctly set up.";

		[Token(Token = "0x4000AA4")]
		internal const string k_InvalidResourceType = "Invalid resource type, expected texture or buffer";

		[Token(Token = "0x4000AA5")]
		internal const string k_NoRenderFunction = "RenderPass was not provided with an execute function.";

		[Token(Token = "0x4000AA6")]
		internal const string k_BeginNoActivePass = "Compiler error: Pass is marked as beginning a native sub pass but no pass is currently active.";

		[Token(Token = "0x4000AA7")]
		internal const string k_NoActivePassForSubpass = "Compiler error: Generated a subpass pass but no pass is currently active.";

		[Token(Token = "0x6001092")]
		[Address(RVA = "0x656DFA0", Offset = "0x656CFA0", VA = "0x656DFA0")]
		internal static string MismatchInDimensions(string name, int fragWidth, int fragHeight, int fragVolumeDepth, ResourceUnversionedData resInfo)
		{
			return null;
		}

		[Token(Token = "0x6001093")]
		[Address(RVA = "0x656E200", Offset = "0x656D200", VA = "0x656E200")]
		internal static string MismatchInMSAASamlpes(string name, int expectedSamples, int actualSamples)
		{
			return null;
		}

		[Token(Token = "0x6001094")]
		[Address(RVA = "0x656E3D0", Offset = "0x656D3D0", VA = "0x656E3D0")]
		internal static string NoGlobalTextureAtPropertyID(int propertyId)
		{
			return null;
		}

		[Token(Token = "0x6001095")]
		[Address(RVA = "0x656E430", Offset = "0x656D430", VA = "0x656E430")]
		internal static string UseDepthWithColorFormat(GraphicsFormat colorFormat)
		{
			return null;
		}

		[Token(Token = "0x6001096")]
		[Address(RVA = "0x656E4A0", Offset = "0x656D4A0", VA = "0x656E4A0")]
		internal static string UseTransientTextureInWrongPass(int transientIndex)
		{
			return null;
		}

		[Token(Token = "0x6001097")]
		[Address(RVA = "0x656E500", Offset = "0x656D500", VA = "0x656E500")]
		internal static string IncompatibleTextureUVOrigin(TextureUVOriginSelection origin, string attachmentType, string attachmentName, RenderGraphResourceType attachmentResourceType, int attachmentResourceIndex, TextureUVOriginSelection attachmentOrigin)
		{
			return null;
		}

		[Token(Token = "0x6001098")]
		[Address(RVA = "0x656E780", Offset = "0x656D780", VA = "0x656E780")]
		internal static string IncompatibleTextureUVOriginUseTexture(TextureUVOriginSelection origin)
		{
			return null;
		}

		[Token(Token = "0x6001099")]
		[Address(RVA = "0x656E810", Offset = "0x656D810", VA = "0x656E810")]
		internal static string UsingLegacyRenderGraph(string passName)
		{
			return null;
		}

		[Token(Token = "0x600109A")]
		[Address(RVA = "0x656E860", Offset = "0x656D860", VA = "0x656E860")]
		internal static string IncompatibleTextureUVOriginStore(string firstAttachmentName, TextureUVOriginSelection firstAttachmentOrigin, string secondAttachmentName, TextureUVOriginSelection secondAttachmentOrigin)
		{
			return null;
		}

		[Token(Token = "0x600109B")]
		[Address(RVA = "0x6561380", Offset = "0x6560380", VA = "0x6561380")]
		internal static string GetExceptionMessage(RenderGraphState state)
		{
			return null;
		}

		[Token(Token = "0x600109C")]
		[Address(RVA = "0x656EA10", Offset = "0x656DA10", VA = "0x656EA10")]
		private static string GetHigherCaller()
		{
			return null;
		}
	}

	[Token(Token = "0x2000251")]
	internal struct CompiledResourceInfo
	{
		[Token(Token = "0x4000AA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public List<int> producers;

		[Token(Token = "0x4000AA9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public List<int> consumers;

		[Token(Token = "0x4000AAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int refCount;

		[Token(Token = "0x4000AAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public bool imported;

		[Token(Token = "0x600109E")]
		[Address(RVA = "0x656EC70", Offset = "0x656DC70", VA = "0x656EC70")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000252")]
	[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
	internal struct CompiledPassInfo
	{
		[Token(Token = "0x4000AAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string name;

		[Token(Token = "0x4000AAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int index;

		[Token(Token = "0x4000AAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public List<int>[] resourceCreateList;

		[Token(Token = "0x4000AAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<int>[] resourceReleaseList;

		[Token(Token = "0x4000AB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GraphicsFence fence;

		[Token(Token = "0x4000AB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int refCount;

		[Token(Token = "0x4000AB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int syncToPassIndex;

		[Token(Token = "0x4000AB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int syncFromPassIndex;

		[Token(Token = "0x4000AB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public bool enableAsyncCompute;

		[Token(Token = "0x4000AB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3D")]
		public bool allowPassCulling;

		[Token(Token = "0x4000AB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3E")]
		public bool needGraphicsFence;

		[Token(Token = "0x4000AB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3F")]
		public bool culled;

		[Token(Token = "0x4000AB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool culledByRendererList;

		[Token(Token = "0x4000AB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
		public bool hasSideEffect;

		[Token(Token = "0x4000ABA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
		public bool enableFoveatedRasterization;

		[Token(Token = "0x4000ABB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public ExtendedFeatureFlags extendedFeatureFlags;

		[Token(Token = "0x4000ABC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool hasShadingRateImage;

		[Token(Token = "0x4000ABD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		public bool hasShadingRateStates;

		[Token(Token = "0x600109F")]
		[Address(RVA = "0x65690D0", Offset = "0x65680D0", VA = "0x65690D0")]
		public void Reset(RenderGraphPass pass, int index)
		{
		}
	}

	[Token(Token = "0x2000253")]
	internal interface ICompiledGraph
	{
		[Token(Token = "0x60010A0")]
		void Clear();
	}

	[Token(Token = "0x2000254")]
	internal class CompiledGraph : ICompiledGraph
	{
		[Token(Token = "0x4000ABE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public DynamicArray<CompiledResourceInfo>[] compiledResourcesInfos;

		[Token(Token = "0x4000ABF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public DynamicArray<CompiledPassInfo> compiledPassInfos;

		[Token(Token = "0x4000AC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int lastExecutionFrame;

		[Token(Token = "0x60010A1")]
		[Address(RVA = "0x655F4E0", Offset = "0x655E4E0", VA = "0x655F4E0")]
		public CompiledGraph()
		{
		}

		[Token(Token = "0x60010A2")]
		[Address(RVA = "0x6563D80", Offset = "0x6562D80", VA = "0x6563D80", Slot = "4")]
		public void Clear()
		{
		}

		[Token(Token = "0x60010A3")]
		[Address(RVA = "0x656ED80", Offset = "0x656DD80", VA = "0x656ED80")]
		private void InitResourceInfosData(DynamicArray<CompiledResourceInfo> resourceInfos, int count)
		{
		}

		[Token(Token = "0x60010A4")]
		[Address(RVA = "0x65683C0", Offset = "0x65673C0", VA = "0x65683C0")]
		public void InitializeCompilationData(List<RenderGraphPass> passes, RenderGraphResourceRegistry resources)
		{
		}
	}

	[Token(Token = "0x2000255")]
	private class ProfilingScopePassData
	{
		[Token(Token = "0x4000AC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public ProfilingSampler sampler;

		[Token(Token = "0x60010A5")]
		[Address(RVA = "0x656EE20", Offset = "0x656DE20", VA = "0x656EE20")]
		public ProfilingScopePassData()
		{
		}
	}

	[Token(Token = "0x2000256")]
	internal delegate void OnGraphRegisteredDelegate(string graphName);

	[Token(Token = "0x2000257")]
	internal delegate void OnExecutionRegisteredDelegate(string graphName, EntityId executionId, string executionName);

	[Token(Token = "0x4000A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private NativePassCompiler nativeCompiler;

	[Token(Token = "0x4000A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int kMaxMRTCount;

	[Token(Token = "0x4000A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal RenderGraphResourceRegistry m_Resources;

	[Token(Token = "0x4000A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RenderGraphObjectPool m_RenderGraphPool;

	[Token(Token = "0x4000A16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RenderGraphBuilders m_builderInstance;

	[Token(Token = "0x4000A17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal List<RenderGraphPass> m_RenderPasses;

	[Token(Token = "0x4000A18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<RendererListHandle> m_RendererLists;

	[Token(Token = "0x4000A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private RenderGraphDebugParams m_DebugParameters;

	[Token(Token = "0x4000A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private RenderGraphLogger m_FrameInformationLogger;

	[Token(Token = "0x4000A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private RenderGraphDefaultResources m_DefaultResources;

	[Token(Token = "0x4000A1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Dictionary<int, ProfilingSampler> m_DefaultProfilingSamplers;

	[Token(Token = "0x4000A1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private InternalRenderGraphContext m_RenderGraphContext;

	[Token(Token = "0x4000A1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private CommandBuffer m_PreviousCommandBuffer;

	[Token(Token = "0x4000A1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private List<int>[] m_ImmediateModeResourceList;

	[Token(Token = "0x4000A20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RenderGraphCompilationCache m_CompilationCache;

	[Token(Token = "0x4000A21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RenderTargetIdentifier[][] m_TempMRTArrays;

	[Token(Token = "0x4000A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Stack<int> m_CullingStack;

	[Token(Token = "0x4000A23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private EntityId m_CurrentExecutionId;

	[Token(Token = "0x4000A24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	private bool m_CurrentExecutionCanGenerateDebugData;

	[Token(Token = "0x4000A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private int m_ExecutionCount;

	[Token(Token = "0x4000A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	private int m_CurrentFrameIndex;

	[Token(Token = "0x4000A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private int m_CurrentImmediatePassIndex;

	[Token(Token = "0x4000A28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	private bool m_ExecutionExceptionWasRaised;

	[Token(Token = "0x4000A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAD")]
	private bool m_RendererListCulling;

	[Token(Token = "0x4000A2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAE")]
	private bool m_EnableCompilationCaching;

	[Token(Token = "0x4000A2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static bool? s_EnableCompilationCachingForTests;

	[Token(Token = "0x4000A2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private CompiledGraph m_DefaultCompiledGraph;

	[Token(Token = "0x4000A2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private CompiledGraph m_CurrentCompiledGraph;

	[Token(Token = "0x4000A2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RenderGraphState m_RenderGraphState;

	[Token(Token = "0x4000A2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private RenderTextureUVOriginStrategy m_renderTextureUVOriginStrategy;

	[Token(Token = "0x4000A30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<RenderGraph, List<DebugExecutionItem>> s_RegisteredExecutions;

	[Token(Token = "0x4000A33")]
	private const string k_BeginProfilingSamplerPassName = "BeginProfile";

	[Token(Token = "0x4000A34")]
	private const string k_EndProfilingSamplerPassName = "EndProfile";

	[Token(Token = "0x4000A35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private static OnGraphRegisteredDelegate m_onGraphRegistered;

	[Token(Token = "0x4000A36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static OnGraphRegisteredDelegate m_onGraphUnregistered;

	[Token(Token = "0x4000A37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private static OnExecutionRegisteredDelegate m_onExecutionRegistered;

	[Token(Token = "0x4000A38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static bool s_DebugSessionWasActive;

	[Token(Token = "0x4000A39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Dictionary<int, TextureHandle> registeredGlobals;

	[Token(Token = "0x17000214")]
	public bool nativeRenderPassesEnabled
	{
		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x655E6F0", Offset = "0x655D6F0", VA = "0x655E6F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FF6")]
		[Address(RVA = "0x655E700", Offset = "0x655D700", VA = "0x655E700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	internal static bool hasAnyRenderGraphWithNativeRenderPassesEnabled
	{
		[Token(Token = "0x6000FF7")]
		[Address(RVA = "0x655E710", Offset = "0x655D710", VA = "0x655E710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000216")]
	public string name
	{
		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x655E900", Offset = "0x655D900", VA = "0x655E900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FF9")]
		[Address(RVA = "0x655E910", Offset = "0x655D910", VA = "0x655E910")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000217")]
	internal RenderGraphState RenderGraphState
	{
		[Token(Token = "0x6000FFA")]
		[Address(RVA = "0x655E930", Offset = "0x655D930", VA = "0x655E930")]
		get
		{
			return default(RenderGraphState);
		}
		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x655E940", Offset = "0x655D940", VA = "0x655E940")]
		set
		{
		}
	}

	[Token(Token = "0x17000218")]
	public RenderTextureUVOriginStrategy renderTextureUVOriginStrategy
	{
		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0x655E950", Offset = "0x655D950", VA = "0x655E950")]
		get
		{
			return default(RenderTextureUVOriginStrategy);
		}
		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x655E960", Offset = "0x655D960", VA = "0x655E960")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public static bool isRenderGraphViewerActive
	{
		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x655E970", Offset = "0x655D970", VA = "0x655E970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021A")]
	internal static bool enableValidityChecks
	{
		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x655EAD0", Offset = "0x655DAD0", VA = "0x655EAD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001000")]
		[Address(RVA = "0x655EB40", Offset = "0x655DB40", VA = "0x655EB40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700021B")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x655EB90", Offset = "0x655DB90", VA = "0x655EB90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021C")]
	internal RenderGraphDebugParams debugParams
	{
		[Token(Token = "0x6001005")]
		[Address(RVA = "0x655F9C0", Offset = "0x655E9C0", VA = "0x655F9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	internal bool areAnySettingsActive
	{
		[Token(Token = "0x6001007")]
		[Address(RVA = "0x6560320", Offset = "0x655F320", VA = "0x6560320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400000A")]
	internal static event OnGraphRegisteredDelegate onGraphRegistered
	{
		[Token(Token = "0x6001048")]
		[Address(RVA = "0x6563EA0", Offset = "0x6562EA0", VA = "0x6563EA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001049")]
		[Address(RVA = "0x6563F80", Offset = "0x6562F80", VA = "0x6563F80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	internal static event OnGraphRegisteredDelegate onGraphUnregistered
	{
		[Token(Token = "0x600104A")]
		[Address(RVA = "0x6564060", Offset = "0x6563060", VA = "0x6564060")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600104B")]
		[Address(RVA = "0x6564140", Offset = "0x6563140", VA = "0x6564140")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000C")]
	internal static event OnExecutionRegisteredDelegate onExecutionRegistered
	{
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x6564220", Offset = "0x6563220", VA = "0x6564220")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x6564300", Offset = "0x6563300", VA = "0x6564300")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x655E2A0", Offset = "0x655D2A0", VA = "0x655E2A0")]
	[Conditional("UNITY_EDITOR")]
	[Conditional("DEVELOPMENT_BUILD")]
	private void AddPassDebugMetadata(RenderGraphPass renderPass, string file, int line)
	{
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x655E2B0", Offset = "0x655D2B0", VA = "0x655E2B0")]
	internal NativePassCompiler CompileNativeRenderGraph(int graphHash)
	{
		return null;
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x655E5E0", Offset = "0x655D5E0", VA = "0x655E5E0")]
	private void ExecuteNativeRenderGraph()
	{
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x655EBA0", Offset = "0x655DBA0", VA = "0x655EBA0")]
	public RenderGraph(string name = "RenderGraph")
	{
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x655F7E0", Offset = "0x655E7E0", VA = "0x655F7E0")]
	internal void CleanupResourcesAndGraph()
	{
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x655F8B0", Offset = "0x655E8B0", VA = "0x655F8B0")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x655F9D0", Offset = "0x655E9D0", VA = "0x655F9D0")]
	internal List<DebugUI.Widget> GetWidgetList()
	{
		return null;
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x6560390", Offset = "0x655F390", VA = "0x6560390")]
	public void RegisterDebug([Optional] DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x6560570", Offset = "0x655F570", VA = "0x6560570")]
	public void UnRegisterDebug()
	{
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x6560670", Offset = "0x655F670", VA = "0x6560670")]
	public static List<RenderGraph> GetRegisteredRenderGraphs()
	{
		return null;
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x6560760", Offset = "0x655F760", VA = "0x6560760")]
	internal static Dictionary<RenderGraph, List<DebugExecutionItem>> GetRegisteredExecutions()
	{
		return null;
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x65607D0", Offset = "0x655F7D0", VA = "0x65607D0")]
	public void EndFrame()
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x6558820", Offset = "0x6557820", VA = "0x6558820")]
	public TextureHandle ImportTexture(RTHandle rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x6558750", Offset = "0x6557750", VA = "0x6558750")]
	public TextureHandle ImportShadingRateImageTexture(RTHandle rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x6560A50", Offset = "0x655FA50", VA = "0x6560A50")]
	public TextureHandle ImportTexture(RTHandle rt, ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x6560A80", Offset = "0x655FA80", VA = "0x6560A80")]
	public TextureHandle ImportTexture(RTHandle rt, RenderTargetInfo info, [Optional] ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x6560AD0", Offset = "0x655FAD0", VA = "0x6560AD0")]
	internal TextureHandle ImportTexture(RTHandle rt, bool isBuiltin)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x6560B00", Offset = "0x655FB00", VA = "0x6560B00")]
	public TextureHandle ImportBackbuffer(RenderTargetIdentifier rt, RenderTargetInfo info, [Optional] ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x6560B50", Offset = "0x655FB50", VA = "0x6560B50")]
	public TextureHandle ImportBackbuffer(RenderTargetIdentifier rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x6560BC0", Offset = "0x655FBC0", VA = "0x6560BC0")]
	public TextureHandle CreateTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x6560BE0", Offset = "0x655FBE0", VA = "0x6560BE0")]
	[Obsolete("CreateSharedTexture() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
	public TextureHandle CreateSharedTexture(in TextureDesc desc, bool explicitRelease = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x6560C00", Offset = "0x655FC00", VA = "0x6560C00")]
	[Obsolete("RefreshSharedTextureDesc() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
	public void RefreshSharedTextureDesc(TextureHandle handle, in TextureDesc desc)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x6560C30", Offset = "0x655FC30", VA = "0x6560C30")]
	[Obsolete("ReleaseSharedTexture() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
	public void ReleaseSharedTexture(TextureHandle texture)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x6560C60", Offset = "0x655FC60", VA = "0x6560C60")]
	public TextureHandle CreateTexture(TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x6560CB0", Offset = "0x655FCB0", VA = "0x6560CB0")]
	public TextureHandle CreateTexture(TextureHandle texture, string name, bool clear = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x6560DF0", Offset = "0x655FDF0", VA = "0x6560DF0")]
	public void CreateTextureIfInvalid(in TextureDesc desc, ref TextureHandle texture)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x6560D80", Offset = "0x655FD80", VA = "0x6560D80")]
	public TextureDesc GetTextureDesc(in TextureHandle texture)
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x6560F60", Offset = "0x655FF60", VA = "0x6560F60")]
	public RenderTargetInfo GetRenderTargetInfo(TextureHandle texture)
	{
		return default(RenderTargetInfo);
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x6560FC0", Offset = "0x655FFC0", VA = "0x6560FC0")]
	public RendererListHandle CreateRendererList(in RendererListDesc desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x6560FE0", Offset = "0x655FFE0", VA = "0x6560FE0")]
	public RendererListHandle CreateRendererList(in RendererListParams desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x6561000", Offset = "0x6560000", VA = "0x6561000")]
	public RendererListHandle CreateShadowRendererList(ref ShadowDrawingSettings shadowDrawingSettings)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x6561030", Offset = "0x6560030", VA = "0x6561030")]
	public RendererListHandle CreateGizmoRendererList(in Camera camera, in GizmoSubset gizmoSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x6561060", Offset = "0x6560060", VA = "0x6561060")]
	public RendererListHandle CreateUIOverlayRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x65610A0", Offset = "0x65600A0", VA = "0x65610A0")]
	public RendererListHandle CreateUIOverlayRendererList(in Camera camera, in UISubset uiSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x65610D0", Offset = "0x65600D0", VA = "0x65610D0")]
	public RendererListHandle CreateWireOverlayRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x6561100", Offset = "0x6560100", VA = "0x6561100")]
	public RendererListHandle CreateSkyboxRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x6561130", Offset = "0x6560130", VA = "0x6561130")]
	public RendererListHandle CreateSkyboxRendererList(in Camera camera, Matrix4x4 projectionMatrix, Matrix4x4 viewMatrix)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x6561160", Offset = "0x6560160", VA = "0x6561160")]
	public RendererListHandle CreateSkyboxRendererList(in Camera camera, Matrix4x4 projectionMatrixL, Matrix4x4 viewMatrixL, Matrix4x4 projectionMatrixR, Matrix4x4 viewMatrixR)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x6561190", Offset = "0x6560190", VA = "0x6561190")]
	[Obsolete("ImportBuffer with forceRelease parameter is deprecated. Use ImportBuffer without it instead. #from(6000.3)")]
	public BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer, bool forceRelease = false)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x6559230", Offset = "0x6558230", VA = "0x6559230")]
	public BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x65611B0", Offset = "0x65601B0", VA = "0x65611B0")]
	public BufferHandle CreateBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x65611D0", Offset = "0x65601D0", VA = "0x65611D0")]
	public BufferHandle CreateBuffer(in BufferHandle graphicsBuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x6561200", Offset = "0x6560200", VA = "0x6561200")]
	public BufferDesc GetBufferDesc(in BufferHandle graphicsBuffer)
	{
		return default(BufferDesc);
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x6561240", Offset = "0x6560240", VA = "0x6561240")]
	public RayTracingAccelerationStructureHandle ImportRayTracingAccelerationStructure(in RayTracingAccelerationStructure accelStruct, [Optional] string name)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x6561260", Offset = "0x6560260", VA = "0x6561260")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenExecuting()
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x65614F0", Offset = "0x65604F0", VA = "0x65614F0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenRecordingGraph()
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x6561610", Offset = "0x6560610", VA = "0x6561610")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenRecordPassOrExecute()
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x6561740", Offset = "0x6560740", VA = "0x6561740")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenRecordingPass()
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x6561860", Offset = "0x6560860", VA = "0x6561860")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsingNativeRenderPassCompiler()
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x6561970", Offset = "0x6560970", VA = "0x6561970")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckUsingNativeRenderPassCompiler()
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x6561A80", Offset = "0x6560A80", VA = "0x6561A80")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenActive()
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x6561BA0", Offset = "0x6560BA0", VA = "0x6561BA0")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenIdle()
	{
	}

	[Token(Token = "0x6001035")]
	public IRasterRenderGraphBuilder AddRasterRenderPass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001036")]
	public IRasterRenderGraphBuilder AddRasterRenderPass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001037")]
	public IComputeRenderGraphBuilder AddComputePass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001038")]
	public IComputeRenderGraphBuilder AddComputePass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	public IUnsafeRenderGraphBuilder AddUnsafePass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x600103A")]
	public IUnsafeRenderGraphBuilder AddUnsafePass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x600103B")]
	[Obsolete("AddRenderPass() is deprecated, use AddRasterRenderPass/AddComputePass/AddUnsafePass() instead.")]
	public RenderGraphBuilder AddRenderPass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return default(RenderGraphBuilder);
	}

	[Token(Token = "0x600103C")]
	[Obsolete("AddRenderPass() is deprecated, use AddRasterRenderPass/AddComputePass/AddUnsafePass() instead.")]
	public RenderGraphBuilder AddRenderPass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return default(RenderGraphBuilder);
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x6561CC0", Offset = "0x6560CC0", VA = "0x6561CC0")]
	public void BeginRecording(in RenderGraphParameters parameters)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x6562630", Offset = "0x6561630", VA = "0x6562630")]
	public void EndRecordingAndExecute()
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x6562C10", Offset = "0x6561C10", VA = "0x6562C10")]
	public bool ResetGraphAndLogException(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x6562690", Offset = "0x6561690", VA = "0x6562690")]
	internal void Execute()
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x65633E0", Offset = "0x65623E0", VA = "0x65633E0")]
	public void BeginProfilingSampler(ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x65637E0", Offset = "0x65627E0", VA = "0x65637E0")]
	public void EndProfilingSampler(ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x6563BE0", Offset = "0x6562BE0", VA = "0x6563BE0")]
	internal DynamicArray<CompiledPassInfo> GetCompiledPassInfos()
	{
		return null;
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x655F8A0", Offset = "0x655E8A0", VA = "0x655F8A0")]
	internal void ClearCurrentCompiledGraph()
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x6562AE0", Offset = "0x6561AE0", VA = "0x6562AE0")]
	private void ClearCompiledGraph(CompiledGraph compiledGraph, bool useCompilationCaching)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x6562B90", Offset = "0x6561B90", VA = "0x6562B90")]
	private void InvalidateContext()
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x6563E50", Offset = "0x6562E50", VA = "0x6563E50")]
	internal void OnPassAdded(RenderGraphPass pass)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x6562D10", Offset = "0x6561D10", VA = "0x6562D10")]
	internal int ComputeGraphHash()
	{
		return default(int);
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x65643E0", Offset = "0x65633E0", VA = "0x65643E0")]
	private void CountReferences()
	{
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x6564CE0", Offset = "0x6563CE0", VA = "0x6564CE0")]
	private void CullUnusedPasses()
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x6565990", Offset = "0x6564990", VA = "0x6565990")]
	private void UpdatePassSynchronization(ref CompiledPassInfo currentPassInfo, ref CompiledPassInfo producerPassInfo, int currentPassIndex, int lastProducer, ref int intLastSyncIndex)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x65659B0", Offset = "0x65649B0", VA = "0x65659B0")]
	private void UpdateResourceSynchronization(ref int lastGraphicsPipeSync, ref int lastComputePipeSync, int currentPassIndex, in CompiledResourceInfo resource)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x6565D10", Offset = "0x6564D10", VA = "0x6565D10")]
	private int GetFirstValidConsumerIndex(int passIndex, in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x6565EE0", Offset = "0x6564EE0", VA = "0x6565EE0")]
	private int FindTextureProducer(int consumerPass, in CompiledResourceInfo info, out int index)
	{
		return default(int);
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x6565AF0", Offset = "0x6564AF0", VA = "0x6565AF0")]
	private int GetLatestProducerIndex(int passIndex, in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x6566030", Offset = "0x6565030", VA = "0x6566030")]
	private int GetLatestValidReadIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x6566120", Offset = "0x6565120", VA = "0x6566120")]
	private int GetFirstValidWriteIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x6566210", Offset = "0x6565210", VA = "0x6566210")]
	private int GetLatestValidWriteIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x6566300", Offset = "0x6565300", VA = "0x6566300")]
	private void CreateRendererLists()
	{
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x6566430", Offset = "0x6565430", VA = "0x6566430")]
	internal bool GetImportedFallback(TextureDesc desc, out TextureHandle fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x6566810", Offset = "0x6565810", VA = "0x6566810")]
	private void AllocateCulledPassResources(ref CompiledPassInfo passInfo)
	{
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x6566EF0", Offset = "0x6565EF0", VA = "0x6566EF0")]
	private void UpdateResourceAllocationAndSynchronization()
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x6567C50", Offset = "0x6566C50", VA = "0x6567C50")]
	private void UpdateAllSharedResourceLastFrameIndex()
	{
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x6567FA0", Offset = "0x6566FA0", VA = "0x6567FA0")]
	private bool AreRendererListsEmpty(List<RendererListHandle> rendererLists)
	{
		return default(bool);
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x6568210", Offset = "0x6567210", VA = "0x6568210")]
	private void TryCullPassAtIndex(int passIndex)
	{
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x65682D0", Offset = "0x65672D0", VA = "0x65682D0")]
	private void CullRendererLists()
	{
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x6562370", Offset = "0x6561370", VA = "0x6562370")]
	private bool UpdateCurrentCompiledGraph(int graphHash, bool forceNoCaching = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x6562E80", Offset = "0x6561E80", VA = "0x6562E80")]
	internal void CompileRenderGraph(int graphHash)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x6568680", Offset = "0x6567680", VA = "0x6568680")]
	private unsafe ref CompiledPassInfo CompilePassImmediatly(RenderGraphPass pass)
	{
		return ref *(CompiledPassInfo*)null;
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x6563E80", Offset = "0x6562E80", VA = "0x6563E80")]
	private void ExecutePassImmediately(RenderGraphPass pass)
	{
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x6569560", Offset = "0x6568560", VA = "0x6569560")]
	private void ExecuteCompiledPass(ref CompiledPassInfo passInfo)
	{
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x6563040", Offset = "0x6562040", VA = "0x6563040")]
	private void ExecuteRenderGraph()
	{
	}

	[Token(Token = "0x6001067")]
	[Address(RVA = "0x656AC70", Offset = "0x6569C70", VA = "0x656AC70")]
	private void PreRenderPassSetRenderTargets(in CompiledPassInfo passInfo, RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x6001068")]
	[Address(RVA = "0x6569F00", Offset = "0x6568F00", VA = "0x6569F00")]
	private void PreRenderPassExecute(in CompiledPassInfo passInfo, RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x656A520", Offset = "0x6569520", VA = "0x656A520")]
	private void PostRenderPassExecute(ref CompiledPassInfo passInfo, RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x6563C00", Offset = "0x6562C00", VA = "0x6563C00")]
	private void ClearRenderPasses()
	{
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x6562780", Offset = "0x6561780", VA = "0x6562780")]
	private void ReleaseImmediateModeResources()
	{
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x65623D0", Offset = "0x65613D0", VA = "0x65623D0")]
	private void LogFrameInformation()
	{
	}

	[Token(Token = "0x600106D")]
	[Address(RVA = "0x6568560", Offset = "0x6567560", VA = "0x6568560")]
	private void LogRendererListsCreation()
	{
	}

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x6569A50", Offset = "0x6568A50", VA = "0x6569A50")]
	private void LogRenderPassBegin(in CompiledPassInfo passInfo)
	{
	}

	[Token(Token = "0x600106F")]
	[Address(RVA = "0x6565460", Offset = "0x6564460", VA = "0x6565460")]
	private void LogCulledPasses()
	{
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x656B430", Offset = "0x656A430", VA = "0x656B430")]
	private ProfilingSampler GetDefaultProfilingSampler(string name)
	{
		return null;
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x656B440", Offset = "0x656A440", VA = "0x656B440")]
	private void UpdateImportedResourceLifeTime(ref DebugData.ResourceData data, List<int> passList)
	{
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x655F6E0", Offset = "0x655E6E0", VA = "0x655F6E0")]
	private void RegisterGraph()
	{
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x655F8E0", Offset = "0x655E8E0", VA = "0x655F8E0")]
	private void UnregisterGraph()
	{
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x65621C0", Offset = "0x65611C0", VA = "0x65621C0")]
	private static string GetExecutionNameAllocates(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x656B5F0", Offset = "0x656A5F0", VA = "0x656B5F0")]
	private void ClearCacheIfNewActiveDebugSession()
	{
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x656B7F0", Offset = "0x656A7F0", VA = "0x656B7F0")]
	private void GenerateDebugData(int graphHash)
	{
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x656C110", Offset = "0x656B110", VA = "0x656C110")]
	private void GenerateCompilerDebugData(ref DebugData debugData)
	{
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x656D9A0", Offset = "0x656C9A0", VA = "0x656D9A0")]
	internal void SetGlobal(in TextureHandle h, int globalPropertyId)
	{
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x656DB70", Offset = "0x656CB70", VA = "0x656DB70")]
	internal bool IsGlobal(int globalPropertyId)
	{
		return default(bool);
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x656DBC0", Offset = "0x656CBC0", VA = "0x656DBC0")]
	internal Dictionary<int, TextureHandle>.ValueCollection AllGlobals()
	{
		return null;
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x656DC10", Offset = "0x656CC10", VA = "0x656DC10")]
	internal TextureHandle GetGlobal(int globalPropertyId)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x6563190", Offset = "0x6562190", VA = "0x6563190")]
	internal void ClearGlobalBindings()
	{
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x656DC80", Offset = "0x656CC80", VA = "0x656DC80")]
	internal void SetIntraFrameMemoryAliasing(bool enabled)
	{
	}
}
